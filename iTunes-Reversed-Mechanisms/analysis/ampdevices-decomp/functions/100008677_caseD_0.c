// name: caseD_0
// address: 100008677

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010000a91c) overlaps instruction at (ram,0x00010000a919)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000100004b77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
switchD_100005882::caseD_0
          (undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
          undefined **param_5,code *param_6)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  uint3 uVar5;
  uint3 uVar6;
  undefined2 uVar7;
  uint uVar8;
  char cVar9;
  code cVar10;
  byte bVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int *piVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined **ppuVar21;
  undefined7 uVar25;
  undefined **UNRECOVERED_JUMPTABLE;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  code *UNRECOVERED_JUMPTABLE_13;
  long lVar29;
  undefined2 uVar30;
  undefined2 extraout_DX;
  uint uVar31;
  undefined **UNRECOVERED_JUMPTABLE_15;
  uint uVar32;
  uint uVar33;
  byte bVar35;
  undefined **ppuVar34;
  long *plVar36;
  uint uVar37;
  long *unaff_RBP;
  uint uVar38;
  ulong uVar39;
  bool bVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined **ppuVar45;
  int iVar46;
  uint *puVar47;
  code *UNRECOVERED_JUMPTABLE_14;
  uint uVar48;
  undefined **UNRECOVERED_JUMPTABLE_12;
  undefined **ppuVar49;
  long in_GS_OFFSET;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  byte bVar53;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar54 [16];
  undefined8 unaff_retaddr;
  mach_msg_header_t mStack_60;
  int iStack_48;
  undefined8 uStack_44;
  uint uStack_3c;
  uint uStack_38;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined **ppuStack_20;
  undefined **ppuStack_18;
  undefined **ppuStack_10;
  char *pcVar15;
  
  bVar53 = 0;
code_r0x000100008677:
  *(undefined8 *)unaff_RBP[-0x3b] = 0;
  *(undefined4 *)param_5 = 0;
  puVar19 = PTR__malloc_10082ea28;
  puVar20 = (undefined8 *)(*(code *)PTR__malloc_10082ea28)(0x18,param_2,param_3);
  switch(puVar20 == (undefined8 *)0x0) {
  case false:
    *puVar20 = 0;
    puVar20[1] = 0x5868a8b6a6dead9;
    *(undefined4 *)(puVar20 + 2) = 0;
    unaff_RBP[-10] = (long)puVar20;
    unaff_RBP[-0x11] = (long)puVar19;
    puVar19 = (undefined *)(*(code *)puVar19)(0x1000);
    auVar54._8_8_ = extraout_XMM0_Qb;
    auVar54._0_8_ = extraout_XMM0_Qa;
    ppuVar17 = (undefined **)unaff_RBP[-10];
    puVar47 = &switchdataD_1006cfa50;
    *ppuVar17 = puVar19;
    unaff_RBP[-0xc] = (long)PTR__free_10082eaf0;
    switch(puVar19 == (undefined *)0x0) {
    case false:
      unaff_RBP[-0x3f] = (long)param_5;
      unaff_RBP[-0x40] = (long)param_6;
      param_6 = (code *)((long)ppuVar17 + 0x4f7a6f9dbc28b98f);
      ppuVar34 = (undefined **)0x4;
      *(uint *)(ppuVar17 + 1) = 0x6a6dfad9;
      unaff_RBP[-0x13] = (long)(PTR_DAT_10088e798_3_10082ea48 + -0xb);
      puVar19 = (undefined *)0x6d94841a1ee4c12e;
      unaff_RBP[-0x2c] = (long)(PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1);
      ppuVar45 = (undefined **)0x3165f9b3;
      UNRECOVERED_JUMPTABLE_14 = (code *)0x3166a97d;
      unaff_RBP[-0xb] = 0x6d94841a1ee4c12e;
      unaff_RBP[-0x18] = 0x6d94841a1ee4c12e;
      unaff_RBP[-0x19] = 0x6d94841a1ee4c12e;
      unaff_RBP[-0x1b] = 0x6d94841a1ee4c12e;
      unaff_RBP[-0x21] = 0x6d94841a1ee4c12e;
      unaff_RBP[-0x1e] = 0x6d94841a1ee4c12e;
      *(undefined4 *)((long)unaff_RBP + -0x7c) = 0x3166a97d;
      unaff_RBP[-0x1d] = 0x6d94841a1ee4c12e;
      unaff_RBP[-0x1c] = 0x6d94841a1ee4c12e;
      switch(ppuVar17 == (undefined **)0x0) {
      case true:
        *(undefined4 *)(unaff_RBP + -10) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x00010000aa86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)((long)(int)UINT_1006cfe0c + 0x10000aa5f))();
        return ppuVar17;
      }
code_r0x00010000a624:
      unaff_RBP[-9] = (long)param_6;
      uVar32 = (int)ppuVar34 - 4;
      uVar33 = uVar32 | 6;
      ppuVar34 = (undefined **)(ulong)uVar33;
      uVar48 = uVar33 + 0x9b8d05f5 & 0x6472fa0c;
      UNRECOVERED_JUMPTABLE_12 = (undefined **)(ulong)uVar48;
      uVar31 = uVar33 - 5;
      uStack_38 = uVar31 | 0x12;
      UNRECOVERED_JUMPTABLE_15 = (undefined **)(ulong)uStack_38;
      unaff_RBP[-0x2a] = (long)((long)ppuVar17 + 0xc);
      param_2 = (undefined **)(ulong)*(uint *)(ppuVar17 + 1);
      UNRECOVERED_JUMPTABLE = (undefined **)(ulong)*(uint *)((long)ppuVar17 + 0xc);
      UNRECOVERED_JUMPTABLE_13 =
           (code *)(ulong)(*(uint *)((long)ppuVar17 + 0xc) + 0x7e29f96c + uVar48);
switchD_10000a6ae_caseD_a65b:
      ppuVar49 = ppuVar17;
      unaff_RBP[-0x21] = (long)param_2;
      uVar38 = (int)param_2 + 0x19429922;
      bVar50 = (uint)UNRECOVERED_JUMPTABLE_13 < uStack_38 + 0x83b083e8;
      param_5 = (undefined **)(ulong)bVar50;
      uVar5 = (uint3)(uStack_38 + 0x83b083e8 >> 8);
      bVar40 = uVar38 < 0x83b083fb != bVar50;
      uVar27 = CONCAT31(uVar5,bVar40);
      ppuVar17 = (undefined **)(ulong)uVar27;
      param_6 = (code *)(ulong)(uVar38 < (uint)UNRECOVERED_JUMPTABLE_13);
      uVar38 = (uint)bVar50;
      if (bVar40) {
        param_6 = (code *)(ulong)uVar38;
      }
code_r0x00010000a697:
      uVar8 = (uint)param_6;
      uVar2 = (&switchdataD_1006cfa50)[(int)(uVar8 + uVar33)];
      UNRECOVERED_JUMPTABLE_13 = (code *)(long)(int)uVar2;
      bVar51 = (undefined **)0xfffffffeffff59db < UNRECOVERED_JUMPTABLE_13;
      param_2 = (undefined **)((long)UNRECOVERED_JUMPTABLE_13 + 0x10000a624);
      bVar52 = param_2 == (undefined **)0x0;
      uVar30 = (undefined2)uStack_38;
      uVar6 = (uint3)(uVar31 >> 8);
      bVar11 = (byte)UNRECOVERED_JUMPTABLE;
      uVar13 = (uint)UNRECOVERED_JUMPTABLE;
      uVar25 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE >> 8);
      cVar10 = SUB41(uVar2,0);
      cVar9 = (char)uVar33;
      uVar7 = (undefined2)(uVar32 >> 0x10);
      bVar35 = (byte)(uVar32 >> 8);
      uVar43 = (uint)bVar50;
      uVar26 = (uint)ppuVar49;
      uVar37 = (uint)unaff_RBP;
      uVar42 = (uint)bVar50;
      uVar44 = (uint)param_2;
      ppuVar21 = UNRECOVERED_JUMPTABLE;
      uStack_44 = (undefined **)UNRECOVERED_JUMPTABLE_13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(param_2) {
      case (undefined **)0x1000019e1:
        if (!bVar51) {
          *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
          cVar10 = *(code *)UNRECOVERED_JUMPTABLE;
          *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
          *(byte *)UNRECOVERED_JUMPTABLE =
               ((char)*(code *)UNRECOVERED_JUMPTABLE - bVar11) - CARRY1((byte)cVar10,bVar11);
          *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
          cVar9 = bVar11 + (char)*(code *)UNRECOVERED_JUMPTABLE;
          pcVar15 = (char *)CONCAT71(uVar25,cVar9);
          *pcVar15 = *pcVar15 + cVar9;
          *pcVar15 = *pcVar15 + cVar9;
          cVar9 = in(0);
          piVar16 = (int *)CONCAT71(uVar25,cVar9);
          *(char *)piVar16 = (char)*piVar16 + cVar9;
          *piVar16 = *piVar16 + (int)piVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        out(*(uint *)param_2,uVar30);
        if (bVar52) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000202f:
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(char *)(unaff_RBP + 9) = (char)unaff_RBP[9] + (char)uStack_38;
      case (undefined **)0x100002038:
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        iStack_48 = 1;
        uStack_3c = 0x1000100;
        uStack_34 = *(undefined8 *)PTR__NDR_record_10082cad0;
        uStack_44 = param_2;
        uStack_2c = uStack_38;
        ppuStack_20 = ppuVar34;
        ppuStack_18 = UNRECOVERED_JUMPTABLE_12;
        ppuStack_10 = ppuVar49;
        mStack_60.msgh_local_port = _mig_get_reply_port();
        mStack_60.msgh_bits = 0x80001513;
        mStack_60.msgh_reserved = 0;
        mStack_60.msgh_id = 0x4b0;
        mStack_60.msgh_remote_port = uVar27;
        if (PTR__voucher_mach_msg_set_10082d2c8 != (undefined *)0x0) {
          _voucher_mach_msg_set(&mStack_60);
        }
        uVar33 = _mach_msg(&mStack_60,3,0x38,0x40,mStack_60.msgh_local_port,0,0);
        ppuVar17 = (undefined **)(ulong)uVar33;
        if ((uVar33 + 0xeffffffe < 0xf) && ((0x4003U >> (uVar33 + 0xeffffffe & 0x1f) & 1) != 0)) {
          _mig_put_reply_port(mStack_60.msgh_local_port);
        }
        else if (uVar33 == 0) {
          if (mStack_60.msgh_id == 0x47) {
            ppuVar17 = (undefined **)0xfffffecc;
          }
          else if (mStack_60.msgh_id == 0x514) {
            if ((int)mStack_60.msgh_bits < 0) {
              ppuVar17 = (undefined **)0xfffffed4;
              if ((((iStack_48 == 1) && (mStack_60.msgh_size == 0x38)) &&
                  (mStack_60.msgh_remote_port == 0)) &&
                 ((uStack_3c >> 0x18 == 1 &&
                  (UNRECOVERED_JUMPTABLE = (undefined **)(ulong)uStack_38, ppuVar34 = param_5,
                  UNRECOVERED_JUMPTABLE_12 = (undefined **)UNRECOVERED_JUMPTABLE_13,
                  uStack_38 == uStack_2c)))) {
switchD_10000a6ae_caseD_21fa:
                *UNRECOVERED_JUMPTABLE_12 = (undefined *)uStack_44;
                *(int *)ppuVar34 = (int)UNRECOVERED_JUMPTABLE;
                return (undefined **)0x0;
              }
            }
            else {
              ppuVar17 = (undefined **)0xfffffed4;
              if (((mStack_60.msgh_size == 0x24) && (uStack_44._4_4_ != 0)) &&
                 (ppuVar17 = (undefined **)0xfffffed4, mStack_60.msgh_remote_port == 0)) {
                ppuVar17 = (undefined **)(ulong)uStack_44._4_4_;
              }
            }
          }
          else {
            ppuVar17 = (undefined **)0xfffffed3;
          }
          _mach_msg_destroy(&mStack_60);
        }
        else {
          _mig_dealloc_reply_port(mStack_60.msgh_local_port);
        }
        return ppuVar17;
      case (undefined **)0x1000021fa:
        goto switchD_10000a6ae_caseD_21fa;
      case (undefined **)0x1000022af:
        cVar10 = (code)in(uVar30);
        *UNRECOVERED_JUMPTABLE_13 = cVar10;
        *(char *)CONCAT71(uVar25,cVar10) = *(char *)CONCAT71(uVar25,cVar10) + (char)cVar10;
        unaff_RBP[-6] = *(long *)PTR____stack_chk_guard_10082cb58;
        puVar19 = PTR__malloc_10082ea28;
        switch((long)ppuVar17 < -6) {
        case false:
          switch((long)ppuVar17 < -1) {
          case false:
            goto switchD_10000b7c0_caseD_0;
          }
          break;
        case true:
          switch(ppuVar17 == (undefined **)0xfffffffffffffff8) {
          case false:
            goto switchD_10000b7c0_caseD_0;
          }
        }
        switch(param_2 == (undefined **)0x0) {
        case false:
          unaff_RBP[-0x36] = (long)ppuVar17;
          lVar18 = (*(code *)puVar19)(0x18);
          UNRECOVERED_JUMPTABLE =
               (undefined **)(long)*(int *)(&DAT_1006cf2d0 + (long)(int)(uint)(lVar18 == 0) * 4);
          UNRECOVERED_JUMPTABLE_13 = switchD_10000aaa3::caseD_0;
          break;
        case true:
switchD_10000b7c0_caseD_0:
          if (*(long *)PTR____stack_chk_guard_10082cb58 == unaff_RBP[-6]) {
            return (undefined **)0xffff5037;
          }
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
switchD_10000a6ae_caseD_57fd:
                    /* WARNING: Could not recover jumptable at 0x000100005806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE))();
        return ppuVar17;
      case (undefined **)0x10000230b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000232f:
        *(uint *)(unaff_RBP + -0x1b) = uVar2;
        unaff_RBP[-0x25] = (long)UNRECOVERED_JUMPTABLE;
        ppuVar17 = (undefined **)FUN_100006533();
        return ppuVar17;
      case (undefined **)0x1000023b5:
        puVar19 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar27 - 0x8f)];
        unaff_RBP[-0x16] = 0;
        unaff_RBP[-0x17] = (long)UNRECOVERED_JUMPTABLE;
        lVar18 = (*(code *)(puVar19 + -2))(unaff_RBP[-0x2c],unaff_RBP[-0x17],0);
        uVar33 = (&switchdataD_1006cfa50)[(int)(uVar26 + (lVar18 == 0))];
        unaff_RBP[-0x14] = unaff_RBP[-0x17];
                    /* WARNING: Could not recover jumptable at 0x000100002434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_1000023ad + (int)uVar33))(0x6d94841a1ee4c12e);
        return ppuVar17;
      case (undefined **)0x1000026d9:
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11 + bVar51;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)(ppuVar17 + 0x200) = (char)*(code *)(ppuVar17 + 0x200) + bVar35;
        puVar19 = (undefined *)(*(code *)unaff_RBP[-0x11])();
        *ppuVar34 = puVar19;
                    /* WARNING: Could not recover jumptable at 0x00010000270b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000026ae +
                             (int)(&switchdataD_1006cfa50)[uVar26 + (puVar19 == (undefined *)0x0)]))
                             ();
        return ppuVar17;
      case (undefined **)0x1000026e2:
        if (-1 < (char)(bVar35 * '\x02')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100002c70:
        UNRECOVERED_JUMPTABLE_14 = (code *)swi(0x6c);
        (*UNRECOVERED_JUMPTABLE_14)();
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + 99) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 99) +
                   (char)UNRECOVERED_JUMPTABLE_13);
                    /* WARNING: Could not recover jumptable at 0x000100002c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x100002b92))(0x6d94841a1ee4c12e);
        return ppuVar17;
      case (undefined **)0x10000301a:
                    /* WARNING: Could not recover jumptable at 0x000100003030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100002fef +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)(uVar2 + uVar13) * 4)))();
        return ppuVar17;
      case (undefined **)0x100003035:
        unaff_RBP[-0x3e] = (long)(ppuVar49 + 1);
        uVar33 = (&switchdataD_1006cfa50)[(int)(uStack_38 + (ppuVar49 == (undefined **)0x0))];
        unaff_RBP[-0xb] = 0x6d94841a1ee4c12e;
        unaff_RBP[-0x18] = (long)param_2;
        unaff_RBP[-0x19] = (long)param_2;
        unaff_RBP[-0x1b] = (long)param_2;
        unaff_RBP[-0x1e] = (long)param_2;
        *(undefined4 *)((long)unaff_RBP + -0x7c) = 0x3166a97d;
        unaff_RBP[-0x1d] = (long)param_2;
        unaff_RBP[-0x1c] = (long)param_2;
                    /* WARNING: Could not recover jumptable at 0x00010000309b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)((long)(int)uVar33 + 0x100003035))();
        return ppuVar17;
      case (undefined **)0x1000032e9:
        *(uint *)(unaff_RBP + -9) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001000032ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_13)();
        return ppuVar17;
      case (undefined **)0x100003340:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000033da:
        DAT_cfd2aa6d = DAT_cfd2aa6d << 1;
        unaff_RBP[-10] = (long)param_2;
        uVar13 = uVar13 + uVar44;
        uVar33 = uStack_38 + bVar50 + 0xe8c83817;
        param_2 = (undefined **)(ulong)(uVar13 < 0x28aea6ba);
        if (uVar33 < 0x28aea6ba == uVar13 < 0x28aea6ba) {
          param_2 = (undefined **)(ulong)(uVar33 < uVar13);
        }
code_r0x000100003418:
                    /* WARNING: Could not recover jumptable at 0x000100003434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000033b0 +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)(((uint)param_2 & 0xff) + uStack_38) * 4)))();
        return ppuVar17;
      case (undefined **)0x10000341a:
        uStack_38 = CONCAT22((short)(uVar31 >> 0x10),CONCAT11(0xc6,(char)uStack_38));
        goto code_r0x000100003418;
      case (undefined **)0x1000034ec:
        if (!bVar52) goto code_r0x00010000353d;
      case (undefined **)0x1000034ac:
        piVar16 = (int *)((long)ppuVar34 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x5d);
        *piVar16 = *piVar16 + -1;
        uVar31 = uVar33 + 0xbc9bcc84;
        param_2 = (undefined **)&DAT_10000562e;
        uVar32 = (uStack_38 * 4 + 0x5648549c & uVar33 + 0xfcdffee1) +
                 (uStack_38 * 2 + 0x2b242a4e ^ 0x7e6fffdb) + 0x554470d4;
        puVar47 = (uint *)(ulong)(uStack_38 + 0x694685de < uVar32);
        uVar33 = uVar31;
        if (uStack_38 + 0x694685de < 0xd3b470af != uVar32 < 0xd3b470af) {
          puVar47 = (uint *)(ulong)(uVar32 < 0xd3b470af);
        }
code_r0x00010000353d:
                    /* WARNING: Could not recover jumptable at 0x00010000355a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_2 +
                             (long)(int)(&switchdataD_1006cfa50)
                                        [(int)(uVar33 + 0x43643376 + ((uint)puVar47 & 0xff))]))();
        return ppuVar17;
      case (undefined **)0x1000035d8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100003a6f:
        lVar18 = unaff_RBP[-0xb];
        *(uint *)unaff_RBP[-0xf] = uVar8 + uVar26 + 0x79764ff1;
                    /* WARNING: Could not recover jumptable at 0x000100003ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100003a62 +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)((int)CONCAT71(uVar25,lVar18 == 0x6d94841a1ee4c12e) +
                                           0x3166a97d) * 4)))();
        return ppuVar17;
      case (undefined **)0x100003af3:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x100003d60:
        UNRECOVERED_JUMPTABLE_14 = (code *)swi(1);
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_14)();
        return ppuVar17;
      case (undefined **)0x100003e3a:
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
                    /* WARNING: Could not recover jumptable at 0x000100003e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_100003e24 + iRam000000017bffff08))();
        return ppuVar17;
      case (undefined **)0x100003f8a:
                    /* WARNING: Could not recover jumptable at 0x000100003fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_1000084a4 +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)(uVar33 + 0x43643336 +
                                                (uint)(*(long *)((long)UNRECOVERED_JUMPTABLE_13 +
                                                                0x10000a664) == 0)) * 4)))
                             (*(long *)((long)UNRECOVERED_JUMPTABLE_13 + 0x10000a664),param_2,
                              &LAB_1000084a4 +
                              *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                      (long)(int)(uVar33 + 0x43643336 +
                                                 (uint)(*(long *)((long)UNRECOVERED_JUMPTABLE_13 +
                                                                 0x10000a664) == 0)) * 4));
        return ppuVar17;
      case (undefined **)0x100004052:
                    /* WARNING: Could not recover jumptable at 0x000100004062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)ppuVar17 + (long)(int)(&switchdataD_1006cfa50)[uVar2]))();
        return ppuVar17;
      case (undefined **)0x1000040e6:
        plVar36 = (long *)&stack0xfffffffffffffff8;
        cVar9 = '\x12';
        do {
          unaff_RBP = unaff_RBP + -1;
          plVar36 = plVar36 + -1;
          *plVar36 = *unaff_RBP;
          cVar9 = cVar9 + -1;
        } while ('\0' < cVar9);
        *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + in_GS_OFFSET) =
             *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + in_GS_OFFSET) ^ uVar44;
                    /* WARNING: Could not recover jumptable at 0x0001000040f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
        return ppuVar17;
      case (undefined **)0x100004268:
                    /* WARNING: Could not emulate address calculation at 0x00010000427a */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100004251 +
                             (int)(&switchdataD_1006cfa50)
                                  [(int)((*(long *)((long)UNRECOVERED_JUMPTABLE_13 +
                                                   CONCAT71(uVar25,(bVar11 - 1) - bVar51)) == 0) +
                                        0x3166a97d)]))();
        return ppuVar17;
      case (undefined **)0x1000042eb:
        *(uint *)((long)UNRECOVERED_JUMPTABLE_15 + -1) =
             *(uint *)((long)UNRECOVERED_JUMPTABLE_15 + -1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x000100004315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000042d0 +
                             (int)(&switchdataD_1006cfa50)
                                  [(int)(uVar13 + (ppuVar34 == (undefined **)0x0))]))
                             (ppuVar17,&DAT_1000042d0 +
                                       (int)(&switchdataD_1006cfa50)
                                            [(int)(uVar13 + (ppuVar34 == (undefined **)0x0))]);
        return ppuVar17;
      case (undefined **)0x100004456:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000044c9:
        *(uint *)(unaff_RBP + -0x12) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001000044cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_15)();
        return ppuVar17;
      case (undefined **)0x100004670:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100004732:
        *(BADSPACEBASE **)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x18) = register0x00000020;
        puVar19 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar13 ^ 0x74)];
        unaff_RBP[-9] = 0x3165f9b3;
        unaff_RBP[-10] = (long)ppuVar17;
        lVar18 = (*(code *)(puVar19 + -3))();
        uVar22 = *(undefined8 *)(unaff_RBP[-9] + -0x5781d62609419b70);
        UNRECOVERED_JUMPTABLE_14 = (code *)(lRam00000001f7a8f4e0 + -3);
        lVar24 = lRam00000001f7a8f030 + -3;
        unaff_RBP[-0x13] = lVar18;
        unaff_RBP[-0x11] = lVar24;
        (*UNRECOVERED_JUMPTABLE_14)(lVar18,lVar24,uVar22);
        UNRECOVERED_JUMPTABLE_14 = (code *)(lRam00000001f7a8f090 + -2);
        unaff_RBP[-0x12] = 0;
        lVar18 = (*UNRECOVERED_JUMPTABLE_14)(unaff_RBP[-0x24],0);
                    /* WARNING: Could not emulate address calculation at 0x0001000047f8 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100004725 +
                             *(int *)((long)(int)((lVar18 == 0) + 0x1ee4c12e) * 4 + 0x3166a97d)))
                             (unaff_RBP[-10]);
        return ppuVar17;
      case (undefined **)0x1000048ab:
        unaff_RBP[-9] = 0x3165f9b3;
        UNRECOVERED_JUMPTABLE_13 = (code *)(ulong)(uStack_38 + 0xbfb73a7d);
        param_2 = (undefined **)(ulong)(uVar13 + 0xd797626c & 0x98ca49c1 ^ 0x5f6be33f);
        ppuVar17 = (undefined **)&DAT_1000055f6;
        bVar50 = uStack_38 + 0xbfb73a7d < 0x1b19bd9a;
        uVar33 = uStack_38 * 2 + 0x493af9be;
        uVar31 = uVar33 ^ 0xfbf69f23;
        ppuVar45 = (undefined **)(ulong)uVar31;
        uVar33 = uVar33 & 0xfbf69f22;
        param_6 = (code *)(ulong)uVar33;
        UNRECOVERED_JUMPTABLE_15 = (undefined **)(ulong)(uVar31 + uVar33 * 2);
LAB_10000490a:
        param_6 = (code *)(ulong)(uint)((int)ppuVar45 + (int)param_6 * 2);
code_r0x00010000490e:
        uVar33 = (int)param_6 + 0x1f231e77;
        bVar40 = (uint)UNRECOVERED_JUMPTABLE_13 < uVar33;
        if (bVar50 != uVar33 < 0x1b19bd9a) {
          bVar40 = uVar33 < 0x1b19bd9a;
        }
        UNRECOVERED_JUMPTABLE_14 =
             (code *)((long)ppuVar17 +
                     (long)*(int *)((long)(int)((uint)bVar40 + (int)UNRECOVERED_JUMPTABLE +
                                               0x7061ac28) * 4 + 0x3166a97d));
                    /* WARNING: Could not recover jumptable at 0x00010000494f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*UNRECOVERED_JUMPTABLE_14)
                             (ppuVar17,param_2,UNRECOVERED_JUMPTABLE_15,UNRECOVERED_JUMPTABLE_13,
                              UNRECOVERED_JUMPTABLE_14);
        return ppuVar17;
      case (undefined **)0x100004909:
        UNRECOVERED_JUMPTABLE =
             (undefined **)
             (CONCAT71(uVar25,bVar11 ^ (byte)*(code *)((long)ppuVar17 + -0x73)) | 0x4a);
        goto code_r0x00010000490e;
      case (undefined **)0x10000491e:
        return UNRECOVERED_JUMPTABLE_15;
      case (undefined **)0x10000496b:
        if (-0x10000a625 < (long)UNRECOVERED_JUMPTABLE_13) goto code_r0x00010000496d;
        goto LAB_10000490a;
      case (undefined **)0x100004996:
        UNRECOVERED_JUMPTABLE = (undefined **)0x4cfffffe;
code_r0x00010000496d:
        *(code *)ppuVar17 = *(code *)param_2;
        uVar22 = uRama87e29da28245e43;
        iVar46 = *(int *)unaff_RBP[-0x2e];
        unaff_RBP[-0x29] = (long)UNRECOVERED_JUMPTABLE;
        ppuVar17 = (undefined **)
                   FUN_100006533(uVar48 + iVar46,uVar22,&LAB_100004bab,UNRECOVERED_JUMPTABLE);
        return ppuVar17;
      case (undefined **)0x100004a58:
        bVar40 = 0x881b36cb < uVar27 != bVar50;
        if (!bVar40) {
          param_5 = (undefined **)(ulong)(0x881b36cb < uVar2);
        }
        iVar46 = *(int *)((long)(int)((int)param_5 + uVar33) * 4 + 0x3166a97d);
        unaff_RBP[-0x23] = (long)((long)ppuVar49 + 0x3165f9b3);
                    /* WARNING: Could not recover jumptable at 0x000100004a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100004a0f + iVar46))
                             (CONCAT31(uVar5,bVar40),&DAT_100004a0f + iVar46);
        return ppuVar17;
      case (undefined **)0x100004ad7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100004b6b:
        uVar33 = (&switchdataD_1006cfa50)[(int)(uVar8 + uVar27)];
        unaff_RBP[-0x2b] = (long)((long)ppuVar49 + unaff_RBP[-9]);
                    /* WARNING: Could not recover jumptable at 0x000100004ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100004b05 + (int)uVar33))(&DAT_100004b05 + (int)uVar33);
        return ppuVar17;
      case (undefined **)0x100004cb1:
        uVar33 = (uVar13 << (cVar9 + 0x5cU & 0x1f) & 0xffeda650) + (uStack_38 ^ 0x7ff6d329) +
                 0xd5e8e659;
        bVar40 = uVar44 < uVar33;
        if (SUB81(param_6,0) != uVar33 < 0x55dfb982) {
          bVar40 = uVar33 < 0x55dfb982;
        }
                    /* WARNING: Could not recover jumptable at 0x000100004d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_5 +
                             (long)*(int *)((long)(int)(bVar40 + uVar27) * 4 + 0x3166a97d)))();
        return ppuVar17;
      case (undefined **)0x100004d12:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100004f43:
        lVar18 = *unaff_RBP;
        iVar46 = *(int *)(&DAT_1006cf290 + (ulong)(uVar2 + 6 + (uint)(uVar44 == 0)) * 4);
        *(undefined **)(lVar18 + -0x30) = PTR__free_10082eaf0;
        *(undefined ***)(lVar18 + -0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100004f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)iVar46 + 0x100004f3a))
                             (ppuVar17,param_2,(code *)((long)iVar46 + 0x100004f3a));
        return ppuVar17;
      case (undefined **)0x100004f99:
        lVar18 = (long)(int)*(uint *)((long)ppuVar17 + (long)(int)(uVar44 + uVar2) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100004fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100004f79 + lVar18))
                             (ppuVar17,uVar44 + uVar2,&DAT_100004f79 + lVar18,lVar18,0x3165f9a4);
        return ppuVar17;
      case (undefined **)0x100004ff7:
        UNRECOVERED_JUMPTABLE_14 = (code *)((long)ppuVar17 + (ulong)bVar53 * -8 + 4);
        iVar41 = (int)UNRECOVERED_JUMPTABLE_14;
        iVar46 = uVar13 + iVar41;
        iVar14 = iVar46 + (uint)(uVar13 < *(uint *)ppuVar17);
        uVar23 = (ulong)(uint)(int)(short)iVar14;
        if ((SCARRY4(uVar13,iVar41) != SCARRY4(iVar46,(uint)(uVar13 < *(uint *)ppuVar17))) ==
            iVar14 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar1 = (ushort *)(uVar23 - 0x7061ab6d);
        *puVar1 = *puVar1 ^ (ushort)UNRECOVERED_JUMPTABLE_14;
        unaff_RBP[-0xe] = uVar23;
LAB_100007e20:
        uVar33 = (uint)unaff_RBP[-0xe];
        (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar33 ^ 0x8f9e54b0)] + -2))
                  (*(undefined4 *)
                    ((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar33 ^ 0x8f9e5490)] + -3),
                   unaff_RBP[-0x20],*(undefined4 *)((long)unaff_RBP + -0x7c));
        iVar46 = *(int *)((long)(int)(uVar33 + 0x7061abcd +
                                     (uint)((int)unaff_RBP[-0xd] ==
                                           (uVar33 + 0xb89c746c & 0xb7c53739 ^ 0x3166a975) +
                                           (uVar33 + 0x7e06e026 & 0xf25acb77))) * 4 + 0x3166a97d);
        unaff_RBP[-0xb] = (long)&switchdataD_1006cfa50;
                    /* WARNING: Could not recover jumptable at 0x000100007eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&LAB_100007e20 + iVar46))();
        return ppuVar17;
      case (undefined **)0x1000050e6:
        ppuVar17 = (undefined **)
                   FUN_10000ae15((ulong)param_2 & 0x13166a9d1,param_2,
                                 *(undefined8 *)(*unaff_RBP + -0x50),&UNK_10000a8f3);
        return ppuVar17;
      case (undefined **)0x1000051be:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100005366:
        lVar18 = CONCAT71(uVar25,(bVar11 - 0x30) - bVar51);
        *(uint *)(lVar18 + 8) = uVar2;
        *(undefined4 *)(lVar18 + 0x10) = 0;
        unaff_RBP[-0xd] = lVar18;
        lVar18 = (*(code *)ppuVar34)(0x1000);
        *(long *)unaff_RBP[-0xd] = lVar18;
                    /* WARNING: Could not recover jumptable at 0x0001000053a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100005344 +
                             (int)(&switchdataD_1006cfa50)[(int)(uVar26 + (lVar18 == 0))]))();
        return ppuVar17;
      case (undefined **)0x1000055d6:
        *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
        plVar36 = (long *)&stack0xfffffffffffffff8;
        cVar9 = '\x18';
        do {
          unaff_RBP = unaff_RBP + -1;
          plVar36 = plVar36 + -1;
          *plVar36 = *unaff_RBP;
          cVar9 = cVar9 + -1;
        } while ('\0' < cVar9);
        UNRECOVERED_JUMPTABLE_13 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + in_GS_OFFSET + -0x42);
        *(uint *)UNRECOVERED_JUMPTABLE_13 = *(uint *)UNRECOVERED_JUMPTABLE_13 ^ uVar2;
        DAT_d5894906b2f40ca1 = bVar11;
                    /* WARNING: Could not recover jumptable at 0x0001000055f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)UNRECOVERED_JUMPTABLE)
                             (ppuVar17,*(undefined8 *)
                                        ((ulong)((uint)&stack0xfffffffffffffff8 & (uint)uVar5 << 8)
                                        - 0x98));
        return ppuVar17;
      case (undefined **)0x1000057fd:
        goto switchD_10000a6ae_caseD_57fd;
      case (undefined **)0x1000058b7:
        unaff_RBP[-0xe] = (ulong)(uVar33 + 0x165a1084 ^ 0x68246018);
                    /* WARNING: Could not recover jumptable at 0x0001000058e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000058ae +
                             (int)*(uint *)((long)ppuVar49 +
                                           (long)(int)(uVar33 + (UNRECOVERED_JUMPTABLE_12 ==
                                                                (undefined **)0x0)) * 4)))();
        return ppuVar17;
      case (undefined **)0x100005a9e:
        UNRECOVERED_JUMPTABLE_15 = (undefined **)((long)UNRECOVERED_JUMPTABLE_13 + 0x100005a65);
        param_5 = (undefined **)0x3165f9b2;
        unaff_RBP[-0x26] = 0;
        UNRECOVERED_JUMPTABLE_13 = (code *)0x0;
        uVar23 = unaff_RBP[-10];
        goto code_r0x000100005ac3;
      case (undefined **)0x100005ac0:
        uVar23 = (ulong)*(uint *)(unaff_RBP + -10);
code_r0x000100005ac3:
                    /* WARNING: Could not recover jumptable at 0x000100005ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)UNRECOVERED_JUMPTABLE_15)
                             (uVar23,param_2,UNRECOVERED_JUMPTABLE_15,UNRECOVERED_JUMPTABLE_13,
                              param_5);
        return ppuVar17;
      case (undefined **)0x100005cbe:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 != (undefined **)0x1 && bVar52) {
          LOCK();
          *(char *)ppuVar34 = (char)(uVar31 >> 8);
          UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (SCARRY8((long)UNRECOVERED_JUMPTABLE_13,0x10000a624)) {
          return UNRECOVERED_JUMPTABLE;
        }
        lVar18 = CONCAT62((int6)((ulong)unaff_RBP >> 0x10),(short)unaff_retaddr);
        uVar23 = *(ulong *)(lVar18 + -0x100);
                    /* WARNING: Could not recover jumptable at 0x000100005c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100005c1f +
                             *(int *)((long)(int)(uVar33 + ((uVar13 ^ 0x93ff6a76) + 0x5d664ce6 <
                                                           uVar23)) * 4 + 0x6d94841a1ee4c12e)))
                             (*(undefined8 *)(lVar18 + -0x108),uVar23,
                              &DAT_100005c1f +
                              *(int *)((long)(int)(uVar33 + ((uVar13 ^ 0x93ff6a76) + 0x5d664ce6 <
                                                            uVar23)) * 4 + 0x6d94841a1ee4c12e));
        return ppuVar17;
      case (undefined **)0x100005fe6:
                    /* WARNING: Could not recover jumptable at 0x000100005fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_13)((int)unaff_RBP[-0xc]);
        return ppuVar17;
      case (undefined **)0x1000061b3:
                    /* WARNING: Could not recover jumptable at 0x0001000061b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_13)();
        return ppuVar17;
      case (undefined **)0x10000639c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000063d9:
        in(0x48);
        (*(code *)unaff_RBP[-0xf])((int)unaff_RBP[-9]);
        unaff_RBP[-0x13] = (long)ppuVar49;
        unaff_RBP[-0x14] = (long)ppuVar34;
        unaff_RBP[-0x11] = (long)UNRECOVERED_JUMPTABLE_12;
                    /* WARNING: Could not emulate address calculation at 0x000100006436 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100006404 +
                             *(int *)(&DAT_1006cf2d0 +
                                     (long)(int)(((int)unaff_RBP[-0x10] < 0x56a6d93f) + 0xb2e838a5)
                                     * 4)))();
        return ppuVar17;
      case (undefined **)0x10000663c:
        piVar16 = (int *)unaff_RBP[-0x23];
        uVar33 = uVar33 + 0xb78b994c & 0x487466b9;
        unaff_RBP[-0x16] = (long)UNRECOVERED_JUMPTABLE_12;
        lVar18 = *(long *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar49);
        lVar29 = (unaff_RBP[-0x36] - (unaff_RBP[-0x36] * 2 & 0x681f333462e1d3ccU)) +
                 -0x4bf06665ce8f161a;
        lVar24 = (ulong)((uVar33 ^ 0x77edfbe6) & uVar13 * 2 + 0xb2a7f59a) +
                 ((ulong)(uVar13 + 0xd953facd) ^ 0xeebfdb7c3bf6fdbb) + 0x11402483c4090245;
        *(byte *)(lVar18 + lVar24) = (byte)((ulong)lVar29 >> 0x38) ^ 0xb4;
        *(byte *)(lVar18 + 1 + lVar24) = (byte)((ulong)lVar29 >> 0x30) ^ 0xf;
        *(byte *)(lVar18 + 2 + lVar24) = (byte)((ulong)lVar29 >> 0x28) ^ 0x99;
        *(byte *)(lVar18 + 3 + lVar24) = (byte)((ulong)lVar29 >> 0x20) ^ 0x9a;
        *(byte *)(lVar18 + 4 + lVar24) = (byte)((ulong)lVar29 >> 0x18) ^ 0x31;
        *(byte *)(lVar18 + 5 + lVar24) = (byte)((ulong)lVar29 >> 0x10) ^ 0x70;
        *(byte *)(lVar18 + 6 + lVar24) = (byte)((ulong)lVar29 >> 8) ^ 0xe9;
        *(byte *)(lVar18 + 7 + lVar24) = (byte)lVar29 ^ 0xe6;
        unaff_RBP[-0x23] = (long)piVar16;
        *piVar16 = *piVar16 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100006750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100006731 +
                             *(int *)((long)(int)(uVar33 + 1) * 4 + 0x6d94841a1ee4c12e)))();
        return ppuVar17;
      case (undefined **)0x100007542:
        iVar46 = *(int *)((long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x6d94841a1ee4c12e);
        unaff_RBP[-10] = (long)UNRECOVERED_JUMPTABLE_15;
                    /* WARNING: Could not recover jumptable at 0x00010000755f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100007525 + iVar46))
                             (UNRECOVERED_JUMPTABLE_15,&DAT_100007525 + iVar46,
                              UNRECOVERED_JUMPTABLE_15,0,param_5,0x3165f9b3);
        return ppuVar17;
      case (undefined **)0x1000075da:
                    /* WARNING: Could not recover jumptable at 0x0001000075e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x100007564))
                             ((long)UNRECOVERED_JUMPTABLE_12 + 0x3165f9b3,
                              (code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x100007564));
        return ppuVar17;
      case (undefined **)0x10000779b:
        UNRECOVERED_JUMPTABLE_13 = (code *)(ulong)(uVar2 + uVar13);
      case (undefined **)0x100007785:
                    /* WARNING: Could not recover jumptable at 0x00010000779d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100007762 +
                             (int)(&switchdataD_1006cfa50)
                                  [(int)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE_13 >> 8),
                                                       1) + uVar33)]))();
        return ppuVar17;
      case (undefined **)0x1000078c3:
        *(uint *)(unaff_RBP + -0x1c) = uStack_38;
        unaff_RBP[-0x17] = (long)UNRECOVERED_JUMPTABLE_15;
        unaff_RBP[-10] = (long)UNRECOVERED_JUMPTABLE_15;
        unaff_RBP[-0x1b] = (long)UNRECOVERED_JUMPTABLE_15;
                    /* WARNING: Could not recover jumptable at 0x0001000078db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
        return ppuVar17;
      case (undefined **)0x100007a54:
        uVar33 = in(uVar30);
        uStack_38 = uStack_38 + 0xf;
        param_2 = (undefined **)(ulong)(uStack_38 ^ 0x5f37aad8);
        ppuVar17 = (undefined **)&DAT_100007ef3;
        bVar40 = uVar33 < 0xa0c855a3;
code_r0x000100007a79:
        ppuVar45 = (undefined **)(ulong)!bVar40;
        uVar42 = (uint)bVar50 * 2 + 0x1d3dda1c;
        param_6 = (code *)(ulong)(uVar42 ^ 0xf365d7fa);
code_r0x000100007a96:
        param_5 = (undefined **)(ulong)(uVar42 & 0xf365d7fa);
        iVar46 = (int)param_6 + (uVar42 & 0xf365d7fa) * 2;
code_r0x000100007a9a:
        unaff_RBP[-0x16] = (ulong)(iVar46 + 0x7dfb3af8);
        uVar33 = (int)param_6 + (int)param_5 * 2 + 0x6bd1d263;
        bVar50 = uVar33 < (uint)param_2;
        bVar40 = (uint)UNRECOVERED_JUMPTABLE_13 < uVar33;
        if ((bool)(char)ppuVar45 != bVar50) {
          bVar40 = bVar50;
        }
                    /* WARNING: Could not recover jumptable at 0x000100007ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)ppuVar17 +
                             (long)*(int *)((long)(int)(bVar40 + uStack_38) * 4 + 0x3166a97d)))();
        return ppuVar17;
      case (undefined **)0x100007a73:
        bVar40 = CARRY1(bRam00000000a0c8d01c,bVar35);
        bRam00000000a0c8d01c = bRam00000000a0c8d01c + bVar35;
        goto code_r0x000100007a79;
      case (undefined **)0x100007a91:
        UNRECOVERED_JUMPTABLE_13 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -1);
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0 || bVar52) {
          iVar46 = uVar8 + (uint)bVar50 * 2;
          goto code_r0x000100007a9a;
        }
        goto code_r0x000100007a96;
      case (undefined **)0x100007b3c:
        *(code *)((long)UNRECOVERED_JUMPTABLE + -0x12) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE + -0x12) +
                    (char)((ulong)UNRECOVERED_JUMPTABLE >> 8) + bVar51);
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (long)UNRECOVERED_JUMPTABLE_15) = (code)0x0;
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar13 + 0xee6010c6)) = (code)0x0;
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar13 + 0xee6010c7)) = (code)0x1;
        uVar33 = *(uint *)param_2;
        unaff_RBP[-0x23] = (long)param_2;
        *(uint *)param_2 = (uVar33 + uVar48) - 0x9c;
                    /* WARNING: Could not recover jumptable at 0x000100007b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100007b75 + *(int *)((long)(int)(uVar26 + 1) * 4 + 0x3166a97d)))
                             (unaff_RBP[-10],param_2,(ulong)(uVar13 + 0xee6010c6),
                              &LAB_100007b75 + *(int *)((long)(int)(uVar26 + 1) * 4 + 0x3166a97d),
                              0x3166a97d);
        return ppuVar17;
      case (undefined **)0x100007dd5:
        uVar22 = vmovlps_avx(auVar54);
        *(undefined8 *)(&stack0xffffffff90cd8141 + (long)UNRECOVERED_JUMPTABLE_13 * 4) = uVar22;
        UNRECOVERED_JUMPTABLE_14 = (code *)unaff_RBP[-0xf];
        (*UNRECOVERED_JUMPTABLE_14)();
        unaff_RBP[-0xe] = 0x6d94841a1ee4c12e;
        *ppuVar34 = (undefined *)0x0;
        uRamf94d0bf45eca0b35 = 0x13af2ab3716112f2;
        (*UNRECOVERED_JUMPTABLE_14)(ppuVar34);
        goto LAB_100007e20;
      case (undefined **)0x100007f40:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000081d2:
        UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(uVar13 + 0xa34fa5bf);
        *(code **)(*unaff_RBP + -0x48) = (code *)((long)ppuVar17 + (long)UNRECOVERED_JUMPTABLE_15);
        UNRECOVERED_JUMPTABLE_15 = *(undefined ***)((long)ppuVar17 + (long)UNRECOVERED_JUMPTABLE_15)
        ;
        param_6 = (code *)(ulong)((uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 +
                                                       (ulong)(uVar13 + 0x28dbe792)) << 0x10 |
                                 (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 +
                                                      (ulong)(uVar13 + 0x28dbe791)) << 0x18);
        param_2 = (undefined **)
                  ((ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 +
                                         (ulong)(uVar44 + uVar13 + 0xa34fa5bf + 0x858c41a5)) << 8);
switchD_10000a6ae_caseD_8213:
        uVar33 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 +
                                      (ulong)((int)UNRECOVERED_JUMPTABLE + 0x858c41d5)) |
                 (uint)param_2 | (uint)param_6;
        *(uint *)ppuVar49 = (int)UNRECOVERED_JUMPTABLE + 4;
        param_2 = (undefined **)
                  (long)(int)(((int)((uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2) <
                              (int)(bVar50 + 0xc ^ 0xb7efa946)) + uVar43);
        ppuVar45 = (undefined **)&DAT_1006cf2d0;
code_r0x000100008268:
                    /* WARNING: Could not recover jumptable at 0x000100008276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100008245 + *(int *)((long)ppuVar45 + (long)param_2 * 4)))();
        return ppuVar17;
      case (undefined **)0x100008213:
        goto switchD_10000a6ae_caseD_8213;
      case (undefined **)0x100008263:
        goto code_r0x000100008268;
      case (undefined **)0x1000082d5:
        uVar33 = (uint)(uVar44 < uVar2);
        if (bVar50) {
          uVar33 = uVar27;
        }
                    /* WARNING: Could not recover jumptable at 0x000100008301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000827b +
                             *(int *)((long)(int)((uVar33 & 0xff) + uVar26) * 4 + 0x3166a97d)))
                             (ppuVar17,&DAT_10000827b +
                                       *(int *)((long)(int)((uVar33 & 0xff) + uVar26) * 4 +
                                               0x3166a97d));
        return ppuVar17;
      case (undefined **)0x100008441:
        bVar40 = uVar27 < 0xb9bf4015;
        if (uVar38 < (uVar33 ^ 0xb9bf3fc1) + uVar44 == uVar27 < 0xb9bf4015) {
          bVar40 = uVar38 <= uVar27 && uVar27 != uVar43;
        }
                    /* WARNING: Could not recover jumptable at 0x00010000849f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100008409 +
                             *(int *)((long)(int)(bVar40 + uStack_38) * 4 + 0x3165f9b3)))
                             (&DAT_100008409 +
                              *(int *)((long)(int)(bVar40 + uStack_38) * 4 + 0x3165f9b3));
        return ppuVar17;
      case (undefined **)0x100008538:
                    /* WARNING: Could not recover jumptable at 0x000100008551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_1000067d3 +
                             *(int *)(param_6 +
                                     (long)(int)((ppuVar17 == (undefined **)0x0) + 0x1ee4c12e) * 4))
                   )(ppuVar17,param_2,
                     &LAB_1000067d3 +
                     *(int *)(param_6 +
                             (long)(int)((ppuVar17 == (undefined **)0x0) + 0x1ee4c12e) * 4));
        return ppuVar17;
      case (undefined **)0x10000866f:
        out(0xc9,uVar13);
        *(int *)((long)unaff_RBP + -0x77) = *(int *)((long)unaff_RBP + -0x77) + 0x8feb8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000086d0:
        *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
        UNRECOVERED_JUMPTABLE_14 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x46);
        *(uint *)UNRECOVERED_JUMPTABLE_14 =
             *(uint *)UNRECOVERED_JUMPTABLE_14 << 1 |
             (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_14 < 0);
        param_3 = CONCAT71((uint7)uVar6,0xf9);
        if ((code *)((long)UNRECOVERED_JUMPTABLE_13 + -1) == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100008717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar17 = (undefined **)
                     (*(code *)(&UNK_1000086de +
                               (int)(&switchdataD_1006cfa50)
                                    [(int)((uVar26 - 0x43 | 0x52) +
                                          (uint)(ppuVar34 == (undefined **)0x0))]))();
          return ppuVar17;
        }
        bVar11 = (byte)(code *)((long)UNRECOVERED_JUMPTABLE_13 + -1) & 7;
        *(byte *)UNRECOVERED_JUMPTABLE =
             (char)*(code *)UNRECOVERED_JUMPTABLE << bVar11 |
             (byte)*(code *)UNRECOVERED_JUMPTABLE >> 8 - bVar11;
        goto code_r0x000100008677;
      case (undefined **)0x1000088df:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100008abe:
                    /* WARNING: Could not recover jumptable at 0x000100008ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(FUN_100008ab0 + *(int *)((long)UNRECOVERED_JUMPTABLE * 4 + 0x6cf2c4)))();
        return ppuVar17;
      case (undefined **)0x100008b99:
        if (bVar52) {
          uVar2 = *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + 0x5af383fb);
        }
        *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_13 + 0x10000a670) = 0x50a01b4b;
        *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_13 + 0x10000a64c) = 0x611c7e149b50062b;
        uVar31 = (*(code *)(UNRECOVERED_JUMPTABLE_15[(int)(uVar26 ^ 0x59)] + -3))
                           (*(undefined4 *)(UNRECOVERED_JUMPTABLE_15[uVar26 & 0x1768f594] + -2),
                            *(undefined8 *)((ulong)uVar2 + 0xb085906243d74671),
                            *(int *)((ulong)uVar2 + 0xb085906243d7467d) + -0x5868a8b,
                            unaff_RBP + -0x26,unaff_RBP + -0x10);
                    /* WARNING: Could not recover jumptable at 0x000100008c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100008b85 +
                             (int)(&switchdataD_1006cfa50)
                                  [(int)(((uVar31 ^ 0x5effdff6) +
                                          (uVar33 * 0x3e + 0xbdffbf70 & uVar31 * 2) == 0x6effdff9) +
                                        uVar26)]))();
        return ppuVar17;
      case (undefined **)0x100008dd3:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 != (undefined **)0x1 && !bVar52) {
          ppuVar17 = (undefined **)FUN_100003918();
          return ppuVar17;
        }
        if (!bVar51 && !bVar52) {
          ppuVar17 = (undefined **)FUN_100003ff0();
          return ppuVar17;
        }
                    /* WARNING: Could not emulate address calculation at 0x000100008d7b */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100008d54 +
                             *(int *)((long)(int)((ppuVar34[3] == (undefined *)0x0) + 0x1ee4c12e) *
                                      4 + 0x3165f9b3)))
                             (ppuVar34[3],
                              &DAT_100008d54 +
                              *(int *)((long)(int)((ppuVar34[3] == (undefined *)0x0) + 0x1ee4c12e) *
                                       4 + 0x3165f9b3));
        return ppuVar17;
      case (undefined **)0x10000901b:
        if (uVar27 < uVar8 == bVar50) {
          param_5 = (undefined **)(ulong)(uVar27 < uVar44);
        }
                    /* WARNING: Could not recover jumptable at 0x00010000904d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100008fd0 +
                             *(int *)((ulong)((int)param_5 + 0x3166a97d) * 4 + 0x6d94841a1ee4c12e)))
                             (&DAT_100008fd0 +
                              *(int *)((ulong)((int)param_5 + 0x3166a97d) * 4 + 0x6d94841a1ee4c12e))
        ;
        return ppuVar17;
      case (undefined **)0x10000910f:
        unaff_RBP[-0x17] = 0x565b69c;
                    /* WARNING: Could not recover jumptable at 0x000100009192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000067a4 +
                             *(int *)(&DAT_1006cf2d0 +
                                     (long)(int)((uint)(uVar2 <= uVar27 && uStack_38 < 0xf161b091) +
                                                (int)CONCAT71(uVar25,bVar11 + 0x41)) * 4)))();
        return ppuVar17;
      case (undefined **)0x1000091aa:
        if (bVar52 || (long)UNRECOVERED_JUMPTABLE_13 < -0x10000a624) goto LAB_10000922a;
        *UNRECOVERED_JUMPTABLE_12 = (undefined *)0x0;
        pcVar15 = (char *)((long)param_5 + -0x365cb05a40fa5045);
        pcVar15[0] = -0x1a;
        pcVar15[1] = '<';
        pcVar15[2] = 'f';
        pcVar15[3] = ']';
        pcVar15[4] = '.';
        pcVar15[5] = -0x42;
        pcVar15[6] = 's';
        pcVar15[7] = 'z';
        (*(code *)ppuVar34)(UNRECOVERED_JUMPTABLE_12);
        unaff_RBP[-0xe] = 0x3166a97d;
        param_6 = (code *)&DAT_1006cf2d0;
        goto LAB_1000091e1;
      case (undefined **)0x100009272:
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) =
             (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x77) | bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000959e:
        cVar10 = (code)in(uVar30);
        *(code *)ppuVar17 = cVar10;
        ppuVar49 = (undefined **)(ulong)(uVar26 - 0xaa);
        lVar18 = *(long *)(param_6 + -0x4f7a6f9dbc28b98f);
        uVar23 = unaff_RBP[-0x24];
        iVar46 = (int)uVar23;
        uVar33 = (iVar46 - (iVar46 * 2 & 0x38691beeU)) + 0x9c348df7;
        *(byte *)(lVar18 + (ulong)(uVar13 + 0xfa797575)) = (byte)(uVar33 >> 0x18) ^ 0x9c;
        *(byte *)(lVar18 + (ulong)(uVar13 + 0xfa797576)) =
             (byte)(uVar33 >> (((byte)(uVar26 - 0xaa) ^ 0x1d) & 0x1f)) ^ 0x34;
        *(byte *)(lVar18 + (ulong)(uVar13 + 0xfa797577)) = (byte)(uVar33 >> 8) ^ 0x8d;
        *(byte *)(lVar18 + (ulong)(uVar13 + 0xfa797578)) = (byte)uVar33 ^ 0xf7;
        uVar33 = *(uint *)param_2;
        unaff_RBP[-0x29] = (long)param_2;
        *(uint *)param_2 = uVar33 + 4;
        unaff_RBP[-9] = (long)param_6;
        UNRECOVERED_JUMPTABLE =
             (undefined **)((ulong)(uVar33 + 0xfa797579) + *(long *)(param_6 + -0x4f7a6f9dbc28b98f))
        ;
        ppuVar34 = (undefined **)(uVar23 & 0xffffffff);
        *(undefined4 *)(unaff_RBP + -0xd) = 0x3166a97d;
        UNRECOVERED_JUMPTABLE_15 = (undefined **)&DAT_100009cf4;
        ppuVar45 = (undefined **)unaff_RBP[-0x3a];
        param_2 = ppuVar34;
        break;
      case (undefined **)0x1000095d7:
        UNRECOVERED_JUMPTABLE_14 = (code *)swi(1);
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_14)();
        return ppuVar17;
      case (undefined **)0x1000098eb:
        unaff_RBP[-0x14] = 0x6d94841a1ee4c12e;
        unaff_RBP[-0x16] = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x00010000993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100009901 +
                             (int)(&switchdataD_1006cfa50)
                                  [(int)(uVar48 + 0x436432cd +
                                        (uint)(((uVar48 ^ 0xbc9bcd1e) + 0x3165f94e ^
                                               uVar48 ^ 0xbc9bcd71) == 0x3165f9b3))]))
                             (ppuVar17,&LAB_100009901 +
                                       (int)(&switchdataD_1006cfa50)
                                            [(int)(uVar48 + 0x436432cd +
                                                  (uint)(((uVar48 ^ 0xbc9bcd1e) + 0x3165f94e ^
                                                         uVar48 ^ 0xbc9bcd71) == 0x3165f9b3))]);
        return ppuVar17;
      case (undefined **)0x100009969:
        UNRECOVERED_JUMPTABLE_15 = (undefined **)(ulong)(uStack_38 + *(uint *)ppuVar17);
        unaff_RBP[-0xb] = 0x365cb05a40fa504d;
        unaff_RBP[-0x19] = 0x365cb05a40fa504d;
        unaff_RBP[-0x17] = 0x365cb05a40fa504d;
        unaff_RBP[-0x1b] = 0x365cb05a40fa504d;
        unaff_RBP[-0x25] = (long)UNRECOVERED_JUMPTABLE;
        puVar28 = &LAB_10000b19e;
        ppuVar17 = param_2;
LAB_10000ae19:
        lVar18 = (long)*(int *)((long)(int)((UNRECOVERED_JUMPTABLE < ppuVar34) + 0x3166a97d) * 4 +
                               0x6d94841a1ee4c12e);
        UNRECOVERED_JUMPTABLE_14 = (code *)(lVar18 + 0x10000ae19);
                    /* WARNING: Could not emulate address calculation at 0x00010000ae52 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*UNRECOVERED_JUMPTABLE_14)
                             (((int)ppuVar17 - (uVar44 * 2 & 0xd3e2c46a)) + -0xebdc8be,lVar18,
                              UNRECOVERED_JUMPTABLE_15,puVar28,0x3166aaf3,UNRECOVERED_JUMPTABLE_14);
        return ppuVar17;
      case (undefined **)0x100009cbd:
        goto code_r0x000100009cd0;
      case (undefined **)0x100009cc1:
        uVar33 = CONCAT22(uVar7,CONCAT11(bVar51,cVar9));
      case (undefined **)0x100009caa:
        param_2 = (undefined **)(ulong)(0x5e2590fe < uVar2);
        ppuVar17 = (undefined **)
                   (ulong)CONCAT31((int3)(uVar33 + 0xa1da6e87 >> 8),
                                   uStack_38 < uVar33 + 0xa1da6e87 != 0x5e2590fe < uVar2);
        param_5 = (undefined **)(ulong)(uStack_38 < uVar13);
code_r0x000100009cd0:
        ppuVar45 = (undefined **)((ulong)param_2 & 0xffffffff);
        if ((char)ppuVar17 == '\0') {
          ppuVar45 = param_5;
        }
                    /* WARNING: Could not recover jumptable at 0x000100009cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100009c78 +
                             (int)*(uint *)((long)ppuVar49 +
                                           (long)(int)(((uint)ppuVar45 & 0xff) + uVar33) * 4)))
                             (ppuVar17,ppuVar45,
                              &DAT_100009c78 +
                              (int)*(uint *)((long)ppuVar49 +
                                            (long)(int)(((uint)ppuVar45 & 0xff) + uVar33) * 4));
        return ppuVar17;
      case (undefined **)0x100009cec:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x100009d16:
        pcVar15 = (char *)((long)ppuVar34 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 0x4d);
        *pcVar15 = *pcVar15 + (char)cVar10;
        in(0x1e);
      case (undefined **)0x100009d21:
        goto switchD_10000a6ae_caseD_9d21;
      case (undefined **)0x100009d42:
        goto switchD_10000a6ae_caseD_9d21;
      case (undefined **)0x100009dcc:
        *(uint *)(unaff_RBP + -0x13) = uVar2;
        unaff_RBP[-0x14] = 0x3166a8fb;
        ppuVar34 = &PTR__bootstrap_look_up_10082e9f0;
        (*(code *)(lRam000000028bb83180 + -1))(UNRECOVERED_JUMPTABLE,lRam000000028bb83200 + -2);
        ppuVar21 = (undefined **)0x3166a8f6;
        UNRECOVERED_JUMPTABLE_12 = UNRECOVERED_JUMPTABLE;
switchD_10000a6ae_caseD_9e22:
        (*(code *)(ppuVar34[(long)ppuVar21] + -1))(UNRECOVERED_JUMPTABLE_12);
        puVar19 = ppuVar34[0x3166a9f7];
        unaff_RBP[-0x18] = (long)UNRECOVERED_JUMPTABLE_12;
        unaff_RBP[-0x2f] = (long)(puVar19 + -2);
        lVar18 = (*(code *)(puVar19 + -2))(UNRECOVERED_JUMPTABLE_12,unaff_RBP[-0x1a]);
        UNRECOVERED_JUMPTABLE_14 = (code *)ppuVar34[0x3166a9c7];
        unaff_RBP[-9] = lVar18;
        auVar54 = (*UNRECOVERED_JUMPTABLE_14)();
                    /* WARNING: Could not emulate address calculation at 0x000100009e9d */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100009dbf +
                             *(int *)(&DAT_1006cf2d0 +
                                     (long)(int)((auVar54._0_8_ == ppuVar34[0x3166a8e5] + -0xe) +
                                                0x3166a97d) * 4)))
                             (0x2164ae80,ppuVar34[0x3166a8e5] + -0xe,auVar54._8_8_,
                              &DAT_100009dbf +
                              *(int *)(&DAT_1006cf2d0 +
                                      (long)(int)((auVar54._0_8_ == ppuVar34[0x3166a8e5] + -0xe) +
                                                 0x3166a97d) * 4));
        return ppuVar17;
      case (undefined **)0x100009e22:
        goto switchD_10000a6ae_caseD_9e22;
      case (undefined **)0x100009e3f:
        pcVar15 = (char *)((long)UNRECOVERED_JUMPTABLE_13 * 5 + -0x4b);
        *pcVar15 = *pcVar15 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100009ec1:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100009f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar17 = (undefined **)
                     (*(code *)(&DAT_100009f2f +
                               *(int *)((long)(int)(uVar27 + (uVar8 < 0x3165f9b3)) * 4 +
                                       0x6d94841a1ee4c12e)))();
          return ppuVar17;
        }
        UNRECOVERED_JUMPTABLE_14 = (code *)swi(0x7e);
        iVar46 = (*UNRECOVERED_JUMPTABLE_14)();
        uVar31 = (*pcRam0000000102b6f430)
                           (*(undefined4 *)
                             ((&PTR__bootstrap_look_up_10082e9f0)
                              [(int)(iVar46 + *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x73) &
                                    0xffffffa0)] + -2),unaff_RBP[-0x24],UNRECOVERED_JUMPTABLE_12);
        UNRECOVERED_JUMPTABLE_15 = (undefined **)0x0;
        bVar52 = (uVar31 ^ 0xbbeefbff) + (uVar31 & 0x3beefbff) * 2 == (uVar33 ^ 0xbbeefbd8);
code_r0x000100009f0c:
                    /* WARNING: Could not recover jumptable at 0x000100009f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100009eb4 +
                             (int)*(uint *)((long)ppuVar49 +
                                           (long)((int)CONCAT71((int7)((ulong)
                                                  UNRECOVERED_JUMPTABLE_15 >> 8),bVar52) +
                                                 0x3166a97d) * 4)))();
        return ppuVar17;
      case (undefined **)0x100009edd:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1 || bVar52) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        out(uVar30,bVar11);
        goto code_r0x000100009f0c;
      case (undefined **)0x100009f79:
                    /* WARNING: Could not recover jumptable at 0x000100009fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100009f5e +
                             *(int *)((long)(int)(((uVar8 ^ 0xa777844d) + 0xde8a3450 +
                                                   (uVar33 + 0x2decf502 & uVar27 * 2 ^ 0xa0006604)
                                                  == 0x46258109) + uVar43) * 4 + 0x6d94841a1ee4c12e)
                             ))();
        return ppuVar17;
      case (undefined **)0x100009ff2:
      case (undefined **)0x100009fdf:
                    /* WARNING: Could not recover jumptable at 0x00010000a007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100009fc4 +
                             *(int *)((long)(int)((uVar8 == (uVar48 + 0xb7eef8fe ^ 0x1ee4c12e)) +
                                                 uVar27) * 4 + 0x3165f9b3)))();
        return ppuVar17;
      case (undefined **)0x10000a0a8:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000a0f6:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1 || !bVar52) {
          unaff_RBP[-0xf] = (long)ppuVar17;
          *(uint *)ppuVar17 = (int)CONCAT71(uVar25,bVar11 + 0xb6) + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar17 = (undefined **)
                     (*(code *)(&DAT_10000a069 +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_12 + (long)(int)uStack_38 * 4)))
                               (ppuVar17,param_2,
                                &DAT_10000a069 +
                                *(int *)((long)UNRECOVERED_JUMPTABLE_12 + (long)(int)uStack_38 * 4))
          ;
          return ppuVar17;
        }
                    /* WARNING: Could not recover jumptable at 0x00010000a179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_12)();
        return ppuVar17;
      case (undefined **)0x10000a240:
        puVar47 = (uint *)0x6cfa50;
        if (cVar9 == '\0') {
          puVar47 = (uint *)(ulong)(0x3165f9b3 < uVar8);
        }
code_r0x00010000a250:
                    /* WARNING: Could not recover jumptable at 0x00010000a26e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000a201 +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)(((uint)puVar47 & 0xff) + uVar2) * 4)))();
        return ppuVar17;
      case (undefined **)0x10000a258:
        goto code_r0x00010000a250;
      case (undefined **)0x10000a28f:
        (*(code *)unaff_RBP[-0xc])();
        ppuVar34[1] = (undefined *)0x0;
        lVar18 = (long)*(int *)((long)(int)((ppuVar34[3] == (undefined *)0x0) + 0x3dc98266) * 4 +
                               0x3165f9b3);
                    /* WARNING: Could not emulate address calculation at 0x00010000a2c6 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100008d54 + lVar18))
                             (ppuVar34[3],&DAT_100008d54 + lVar18,lVar18,0x3dc9826d);
        return ppuVar17;
      case (undefined **)0x10000a3ba:
        *(code *)((long)UNRECOVERED_JUMPTABLE + 99) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE + 99) + (char)cVar10);
        uVar33 = (&switchdataD_1006cfa50)[(long)UNRECOVERED_JUMPTABLE_13];
        *(undefined8 *)(*unaff_RBP + -0x58) = 0x6d94841a1ee4c12e;
                    /* WARNING: Could not recover jumptable at 0x00010000a3df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000a392 + (int)uVar33))
                             (0x3165f9b2,&DAT_10000a392 + (int)uVar33,0x6d94841a1ee4c12e);
        return ppuVar17;
      case (undefined **)0x10000a3ec:
        *(undefined8 *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7c35767f) = unaff_retaddr;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000a444:
        (*(code *)unaff_RBP[-0xc])();
        *(long *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar49) = unaff_RBP[-0x27];
        *(undefined4 *)unaff_RBP[-0x33] = *(undefined4 *)((long)unaff_RBP + -0xe4);
        piVar16 = (int *)unaff_RBP[-0x2b];
        iVar46 = *piVar16;
        unaff_RBP[-0x16] = (long)UNRECOVERED_JUMPTABLE_12;
        lVar18 = *(long *)((long)UNRECOVERED_JUMPTABLE_12 + (long)ppuVar49);
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xd953facd)) = 0;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xd953face)) = 0;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xd953facf)) = 0;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xd953fad0)) = 1;
        unaff_RBP[-0x2b] = (long)piVar16;
        *piVar16 = *piVar16 + 4;
                    /* WARNING: Could not recover jumptable at 0x00010000a4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_10000a4be +
                             *(int *)((long)(int)((uVar33 ^ 0xb3) * 0x3d + 1) * 4 +
                                     0x6d94841a1ee4c12e)))();
        return ppuVar17;
      case (undefined **)0x10000a55d:
        sVar12 = func_0x0001484c95e5();
                    /* WARNING: Could not recover jumptable at 0x00010000a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000a55b +
                             *(int *)((long)ppuVar45 +
                                     (long)(int)((*(long *)((&PTR__bootstrap_look_up_10082e9f0)
                                                            [(uint)(int)sVar12] + -3) == 0) +
                                                0x1ee4c12e) * 4)))();
        return ppuVar17;
      case (undefined **)0x10000a624:
        goto code_r0x00010000a624;
      case (undefined **)0x10000a62c:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000a62d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000a64c:
        *(int *)((long)ppuVar34 + 0x478b0877) = *(int *)((long)ppuVar34 + 0x478b0877) + -1;
        UNRECOVERED_JUMPTABLE = (undefined **)((ulong)UNRECOVERED_JUMPTABLE | 0x42);
      case (undefined **)0x10000a654:
        goto switchD_10000a6ae_caseD_a654;
      case (undefined **)0x10000a655:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000a65b:
        goto switchD_10000a6ae_caseD_a65b;
      case (undefined **)0x10000a677:
        UNRECOVERED_JUMPTABLE = (undefined **)CONCAT71(uVar25,bVar51);
        goto switchD_10000a6ae_caseD_a65b;
      case (undefined **)0x10000a688:
        UNRECOVERED_JUMPTABLE_13 = (code *)0x0;
        goto switchD_10000a6ae_caseD_a65b;
      case (undefined **)0x10000a695:
        goto switchD_10000a6ae_caseD_a695;
      case (undefined **)0x10000a6d8:
        if (-1 < (long)param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000a6ea:
        uVar33 = uVar33 * 2 + 0x2b242a4e;
        uVar33 = uVar48 + (uVar33 ^ 0x6a6ffadb) + (uVar33 & 0xea6ffada) * 2 + 0x118d5ff1;
        bVar50 = uVar2 < uVar33;
        if (bVar40 != uVar33 < 0x7bfd5bc6) {
          bVar50 = uVar33 < 0x7bfd5bc6;
        }
                    /* WARNING: Could not recover jumptable at 0x00010000a754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_2 +
                             (long)(int)(&switchdataD_1006cfa50)
                                        [(int)(bVar50 + uVar13 + 0x4364339e)]))
                             ((code *)((long)param_2 +
                                      (long)(int)(&switchdataD_1006cfa50)
                                                 [(int)(bVar50 + uVar13 + 0x4364339e)]));
        return ppuVar17;
      case (undefined **)0x10000a757:
        unaff_RBP[-0xb] = 0x6d94841a1ee4c12e;
        unaff_RBP[-0x18] = (long)UNRECOVERED_JUMPTABLE_13;
        unaff_RBP[-0x19] = (long)UNRECOVERED_JUMPTABLE_13;
        unaff_RBP[-0x1b] = (long)UNRECOVERED_JUMPTABLE_13;
        unaff_RBP[-0x21] = (long)UNRECOVERED_JUMPTABLE_13;
        unaff_RBP[-0x1e] = (long)UNRECOVERED_JUMPTABLE_13;
        *(undefined4 *)((long)unaff_RBP + -0x7c) = 0x3166a97d;
        unaff_RBP[-0x1d] = (long)UNRECOVERED_JUMPTABLE_13;
        unaff_RBP[-0x1c] = (long)UNRECOVERED_JUMPTABLE_13;
        ppuVar17 = (undefined **)FUN_10000aa18(ppuVar17,unaff_RBP[-0x2a]);
        return ppuVar17;
      case (undefined **)0x10000a7d7:
                    /* WARNING: Could not recover jumptable at 0x00010000a7ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000a7ae +
                             *(int *)((long)(int)(CONCAT31(uVar6,1) + uVar13) * 4 + 0x3165f9b3)))();
        return ppuVar17;
      case (undefined **)0x10000a877:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000a911:
        bVar53 = 1;
        UNRECOVERED_JUMPTABLE_15 = (undefined **)unaff_RBP[-0x11];
      case (undefined **)0x10000a913:
        *(uint *)ppuVar17 = *(uint *)param_2;
        ppuRamffffff78958b48c9 = UNRECOVERED_JUMPTABLE;
        *(uint *)((long)UNRECOVERED_JUMPTABLE_15 + 0xbf05afbb) = uVar13;
        *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_15 + -0x365cb05a40fa5041) = 0x7a73be2e;
code_r0x00010000a937:
        unaff_RBP[-0xb] = (long)UNRECOVERED_JUMPTABLE_15;
        unaff_RBP[-0xe] = unaff_RBP[-0x13];
        unaff_RBP[-0x18] = unaff_RBP[-0x14];
        ppuVar49 = (undefined **)unaff_RBP[-0x1a];
        *(undefined4 *)(unaff_RBP + -0x10) = 0x3166a97d;
        unaff_RBP[-9] = (long)UNRECOVERED_JUMPTABLE_12;
        ppuVar34 = (undefined **)PTR__xpc_release_10082eb00;
        (*(code *)PTR__xpc_release_10082eb00)
                  (unaff_RBP[-0xe],
                   (undefined **)((long)UNRECOVERED_JUMPTABLE_13 + (0x200014c5 - (ulong)bVar53) * 8)
                  );
        (*(code *)ppuVar34)(unaff_RBP[-0x18]);
        UNRECOVERED_JUMPTABLE =
             (undefined **)
             (long)*(int *)((long)(int)((ppuVar49 == (undefined **)0x0) + 0x5a) * 4 +
                           0x6d94841a1ee4c12e);
switchD_10000a6ae_caseD_a9a9:
        unaff_RBP[-0x1a] = (long)ppuVar49;
        unaff_RBP[-0xf] = (long)ppuVar34;
                    /* WARNING: Could not recover jumptable at 0x00010000a9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE + 0x10000a967))();
        return ppuVar17;
      case (undefined **)0x10000a92c:
        *(uint *)ppuVar17 = *(uint *)param_2;
        ppuRam7a73be2e0204c7c9 = UNRECOVERED_JUMPTABLE;
        goto code_r0x00010000a937;
      case (undefined **)0x10000a9a9:
        goto switchD_10000a6ae_caseD_a9a9;
      case (undefined **)0x10000ac07:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000ac1b:
        cVar10 = *(code *)((long)param_2 + (ulong)(uVar27 + 0xa723cfe7));
        *(uint *)unaff_RBP[-0xf] = uVar27 + 4;
        ppuVar34 = (undefined **)(ulong)uStack_38;
        UNRECOVERED_JUMPTABLE =
             (undefined **)
             (*(code *)unaff_RBP[-0x11])
                       (ppuVar34,param_2,UNRECOVERED_JUMPTABLE_15,
                        ((uint)(byte)cVar10 | uVar2 << 8 | uVar13 | 0xe | uVar43) ^ 0xb7efa97f);
        *(undefined ***)unaff_RBP[-0x3b] = UNRECOVERED_JUMPTABLE;
        UNRECOVERED_JUMPTABLE_15 = (undefined **)&UNK_10000b424;
        ppuVar45 = (undefined **)0x6d94841a1ee4c12e;
        param_2 = ppuVar34;
        puVar47 = (uint *)UNRECOVERED_JUMPTABLE_12;
        break;
      case (undefined **)0x10000ac6d:
        *(code *)((long)UNRECOVERED_JUMPTABLE + -0x77) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE + -0x77) + (char)cVar10);
        ppuVar45 = (undefined **)0x6d94841a1ee4c12e;
        break;
      case (undefined **)0x10000ac92:
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        goto code_r0x00010000ac94;
      case (undefined **)0x10000accf:
        uVar23 = (ulong)*(uint *)UNRECOVERED_JUMPTABLE;
        puVar19 = UNRECOVERED_JUMPTABLE_15[0x1ee4c19e];
        *(undefined ***)(uVar23 - 0xf8) = ppuVar34;
        lVar18 = (*(code *)(puVar19 + -1))(ppuVar34,*(undefined8 *)(uVar23 - 0x68),uVar23 - 0x128);
        iVar46 = *(int *)((long)param_5 + (long)(int)((lVar18 == 0) + 0x1ee4c12e) * 4);
        *(undefined8 *)(uVar23 - 0x198) = 0;
        *(undefined8 *)(uVar23 - 0x58) = 0x6d94841a1ee4c12e;
                    /* WARNING: Could not recover jumptable at 0x00010000ad49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_10000acca + iVar46))(0x3165f9a5);
        return ppuVar17;
      case (undefined **)0x10000ad15:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000ae35:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 != (undefined **)0x1) {
          iVar46 = *(int *)((long)(int)(uVar44 + (uVar27 == 0)) * 4 + 0x6d94841a1ee4c12e);
          unaff_RBP[-0x19] = (ulong)uStack_38;
                    /* WARNING: Could not recover jumptable at 0x00010000aea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar17 = (undefined **)(*(code *)(&UNK_10000ae65 + iVar46))();
          return ppuVar17;
        }
        puVar28 = (undefined1 *)(ulong)uVar33;
        goto LAB_10000ae19;
      case (undefined **)0x10000ae72:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000aebc:
        unaff_RBP = (long *)(ulong)(uVar37 ^ 2);
        unaff_RBP[-0xe] = 0x1ee4c149;
        UNRECOVERED_JUMPTABLE_12 = &PTR__bootstrap_look_up_10082e9f0;
        UNRECOVERED_JUMPTABLE_15 =
             (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar26 - 0x85)] + -1);
        uVar27 = uVar26;
        goto code_r0x00010000aee2;
      case (undefined **)0x10000aee0:
code_r0x00010000aee2:
        (*(code *)UNRECOVERED_JUMPTABLE_15)
                  (UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_12[(int)(uVar27 ^ 0xb7)] + -2);
        (*(code *)(UNRECOVERED_JUMPTABLE_12[(int)(uVar26 ^ 0x83)] + -1))(UNRECOVERED_JUMPTABLE);
        UNRECOVERED_JUMPTABLE_14 = (code *)(UNRECOVERED_JUMPTABLE_12[(int)(uVar26 - 0x80)] + -2);
        unaff_RBP[-0x20] = (long)UNRECOVERED_JUMPTABLE;
        ppuVar17 = UNRECOVERED_JUMPTABLE;
switchD_10000a6ae_caseD_af29:
        uVar22 = (*UNRECOVERED_JUMPTABLE_14)(ppuVar17,unaff_RBP[-0x1a]);
        puVar19 = (undefined *)
                  (*(code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar26 - 0x70)])(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010000af91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000aeaa +
                             (int)(&switchdataD_1006cfa50)
                                  [(int)((puVar19 ==
                                         (&PTR__bootstrap_look_up_10082e9f0)
                                         [(int)(uVar26 & 0x93c84965)] + -0xe) + uVar26)]))();
        return ppuVar17;
      case (undefined **)0x10000af29:
        goto switchD_10000a6ae_caseD_af29;
      case (undefined **)0x10000b085:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000b2bb:
        *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x6c) =
             *(int *)((long)UNRECOVERED_JUMPTABLE + 0x6c) + uVar13 + (uint)bVar51;
        pcVar15 = (char *)((long)ppuVar34 + (long)UNRECOVERED_JUMPTABLE_13 * 4 + -0x43);
        *pcVar15 = *pcVar15 + (char)cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000b354:
        unaff_RBP[-0x2c] = (long)&switchdataD_1006cfa50;
        switchdataD_1006cfa50 = switchdataD_1006cfa50 + uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010000b38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)*(int *)((long)(int)(uVar33 + 1) * 4 + 0x6d94841a1ee4c12e) +
                             0x10000b369))();
        return ppuVar17;
      case (undefined **)0x10000b39a:
        unaff_RBP[-0xe] = 0xafe51a45;
                    /* WARNING: Could not emulate address calculation at 0x00010000b3c7 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000b393 +
                             *(int *)((long)(int)((param_5 == (undefined **)0x365cb05a40fa504d) +
                                                 0x3166a97d) * 4 + 0x6d94841a1ee4c12e)))();
        return ppuVar17;
      case (undefined **)0x10000b48e:
                    /* WARNING: Could not recover jumptable at 0x00010000b495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_13)();
        return ppuVar17;
      case (undefined **)0x10000b4d0:
        *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
        UNRECOVERED_JUMPTABLE_14 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x47);
        *(uint *)UNRECOVERED_JUMPTABLE_14 =
             *(uint *)UNRECOVERED_JUMPTABLE_14 << 1 |
             (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_14 < 0);
        ppuStack_10 = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010000b4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_13)(ppuVar17,param_2,param_5);
        return ppuVar17;
      case (undefined **)0x10000b4fe:
        unaff_RBP[-0xe] = (long)UNRECOVERED_JUMPTABLE;
        param_5 = (undefined **)0x365cb05a40fa504d;
LAB_1000091e1:
        UNRECOVERED_JUMPTABLE_14 = (code *)unaff_RBP[-0xe];
        iVar46 = (int)UNRECOVERED_JUMPTABLE_14;
        uVar48 = iVar46 + 0x66a9cd17U & 0x1ad7c1fc;
        ppuVar17 = (undefined **)
                   (ulong)*(uint *)(*(long *)((long)(iVar46 + -0x7e7e7119) * 8 + 0x6d94841a1ee4c12e)
                                   + -3);
        param_2 = (undefined **)unaff_RBP[-0x1f];
        UNRECOVERED_JUMPTABLE_15 = (undefined **)(ulong)*(uint *)((long)unaff_RBP + -0x8c);
        UNRECOVERED_JUMPTABLE =
             *(undefined ***)((long)(iVar46 + -0x7e7e70f9) * 8 + 0x6d94841a1ee4c12e);
LAB_10000922a:
        (*(code *)((long)UNRECOVERED_JUMPTABLE + -2))(ppuVar17,param_2,UNRECOVERED_JUMPTABLE_15);
        iVar46 = *(int *)(param_6 +
                         (long)(int)((int)UNRECOVERED_JUMPTABLE_14 + -0x7e7e70fa +
                                    (uint)((int)unaff_RBP[-0x10] == uVar48 + 0x3166a94d)) * 4);
        unaff_RBP[-0xb] = (long)param_5;
                    /* WARNING: Could not recover jumptable at 0x000100009268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&LAB_1000091e1 + iVar46))();
        return ppuVar17;
      case (undefined **)0x10000b777:
                    /* WARNING: Could not recover jumptable at 0x00010000b787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100009052 + (int)(&switchdataD_1006cfa50)[uVar33]))
                             (ppuVar17,param_2,
                              &LAB_100009052 + (int)(&switchdataD_1006cfa50)[uVar33]);
        return ppuVar17;
      case (undefined **)0x10000b809:
        UNRECOVERED_JUMPTABLE_14 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + in_GS_OFFSET + -0x48);
        *(uint *)UNRECOVERED_JUMPTABLE_14 = *(uint *)UNRECOVERED_JUMPTABLE_14 ^ uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010000b81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*UNRECOVERED_JUMPTABLE_13)(ppuVar17,param_2,param_5);
        return ppuVar17;
      case (undefined **)0x10000b87e:
        *(uint *)unaff_RBP[-0x34] = uVar13;
        lVar24 = lRam6d94841a504abae1;
        piVar16 = (int *)unaff_RBP[-0x22];
        iVar46 = *piVar16;
        lVar18 = unaff_RBP[-10];
        uVar33 = (uVar48 ^ 0xf) * 0x31;
        *(undefined1 *)(lRam6d94841a504abae1 + (ulong)(iVar46 + 0xee6010c4)) = 0;
        *(undefined1 *)(lVar24 + (ulong)(iVar46 + 0xee6010c5)) = 0;
        *(undefined1 *)(lVar24 + (ulong)(iVar46 + 0xee6010c6)) = 0;
        uVar23 = (ulong)((uVar33 ^ 0xee601003) + iVar46);
        *(undefined1 *)(lVar24 + uVar23) = 1;
        unaff_RBP[-0x22] = (long)piVar16;
        *piVar16 = *piVar16 + 4;
        UNRECOVERED_JUMPTABLE_14 =
             (code *)((long)*(int *)((long)(int)(uVar33 + 1) * 4 + 0x3166a97d) + 0x10000b8df);
                    /* WARNING: Could not recover jumptable at 0x00010000b905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*UNRECOVERED_JUMPTABLE_14)
                             (lVar18,piVar16,uVar23,UNRECOVERED_JUMPTABLE_14,0x3166a97d);
        return ppuVar17;
      case (undefined **)0x10000b9f6:
        uVar23 = uVar37 - 0x1a8 ^ _DAT_10088e7e0 ^ DAT_10088e7f8;
        _DAT_10088e7e0 = uVar23 * 0x79f54c43 ^ 0xa7a004eac7f8732f;
        DAT_10088e7f8 = (uVar23 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
        uVar33 = ((int)DAT_10088e7f8 + (int)_DAT_10088e7e0 ^ 0xc7f8732fU) * 0x79f54c43;
        ppuVar49 = &PTR__bootstrap_look_up_10082e9f0;
        UNRECOVERED_JUMPTABLE_13 =
             (code *)(&PTR__bootstrap_look_up_10082e9f0)
                     [(int)((byte)((byte)uVar33 ^
                                  (&DAT_1006cff50)[(byte)(&DAT_1006d2b00)[uVar33 & 0xff] ^ 0x5e]) -
                           0x52)];
        UNRECOVERED_JUMPTABLE_14 = (code *)(*UNRECOVERED_JUMPTABLE_13)(0x18);
        puVar19 = &DAT_1006d03f0;
        switch(UNRECOVERED_JUMPTABLE_14 == (code *)0x0) {
        case false:
          unaff_RBP[-0x15] = (long)(UNRECOVERED_JUMPTABLE_14 + 0x4fa7d679e7137a48);
          *(long *)UNRECOVERED_JUMPTABLE_14 = 0;
          *(long *)(UNRECOVERED_JUMPTABLE_14 + 8) = 0x578a91945daaea27;
          *(undefined4 *)(UNRECOVERED_JUMPTABLE_14 + 0x10) = 0;
          ppuVar17 = (undefined **)0x1000;
          unaff_RBP[-0x14] = (long)UNRECOVERED_JUMPTABLE_13;
          lVar18 = (*UNRECOVERED_JUMPTABLE_13)();
          *(long *)UNRECOVERED_JUMPTABLE_14 = lVar18;
          UNRECOVERED_JUMPTABLE_13 =
               switchD_10000baba::caseD_0 +
               *(int *)(&DAT_1006d03f0 + (ulong)((lVar18 == 0) + 7) * 4);
          unaff_RBP[-9] = (long)PTR__free_10082eaf0;
          switch(lVar18 == 0) {
          case false:
            unaff_RBP[-0x34] = (long)UNRECOVERED_JUMPTABLE_12;
            uVar33 = 1;
            param_2 = (undefined **)0x742c45ff88570c30;
            UNRECOVERED_JUMPTABLE =
                 (undefined **)(ulong)((UNRECOVERED_JUMPTABLE_14 == (code *)0x0) + 1);
            goto switchD_10000a6ae_caseD_11677;
          case true:
            switch(UNRECOVERED_JUMPTABLE_14 == (code *)0x0) {
            case false:
              (*(code *)unaff_RBP[-9])(UNRECOVERED_JUMPTABLE_14);
              ppuVar17 = (undefined **)switchD_10000baba::caseD_1();
              return ppuVar17;
            }
          }
        }
        if (*(long *)PTR____stack_chk_guard_10082cb58 == unaff_RBP[-6]) {
          return (undefined **)0xffff5035;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      case (undefined **)0x10000ba16:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000bec4:
        iVar46 = *(int *)unaff_RBP[-0x2d];
        unaff_RBP[-0x2b] = (long)((ulong)UNRECOVERED_JUMPTABLE ^ 10);
        lVar18 = (long)*(int *)((long)(int)(((undefined **)((ulong)UNRECOVERED_JUMPTABLE ^ 10) <
                                            param_2) + 0x3166a97d) * 4 + 0x6d94841a1ee4c12e);
        UNRECOVERED_JUMPTABLE_14 = (code *)(lVar18 + 0x10000de3e);
                    /* WARNING: Could not emulate address calculation at 0x00010000de73 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*UNRECOVERED_JUMPTABLE_14)
                             (((iVar46 + -0x511020d) - ((iVar46 + -0x511020d) * 2 & 0xdc26fed4U)) +
                              -0xebdc8be,param_2,lVar18,&UNK_1000107cc,0x9433fc50,
                              UNRECOVERED_JUMPTABLE_14);
        return ppuVar17;
      case (undefined **)0x10000c05a:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000c069:
        uVar33 = *(uint *)(unaff_RBP + -10);
        *(undefined8 *)(ulong)uVar33 = 0;
        ((undefined8 *)(ulong)uVar33)[1] = ppuVar34;
        (*(code *)unaff_RBP[-0xd])();
        unaff_RBP[-0xc] = 0x3166a97d;
        unaff_RBP[-0x20] = unaff_RBP[-0xe];
        ppuVar17 = (undefined **)FUN_1000134a9((ulong)ppuVar49 & 0xffffffff);
        return ppuVar17;
      case (undefined **)0x10000c364:
        UNRECOVERED_JUMPTABLE_13 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 0xf);
        *(uint *)UNRECOVERED_JUMPTABLE_13 =
             *(uint *)UNRECOVERED_JUMPTABLE_13 << 0x17 | *(uint *)UNRECOVERED_JUMPTABLE_13 >> 9;
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000c5a7:
        ppuVar17 = (undefined **)((long)UNRECOVERED_JUMPTABLE_13 + 0x3166a985);
        UNRECOVERED_JUMPTABLE_15 = (undefined **)((long)UNRECOVERED_JUMPTABLE_13 + 0x3166a989);
      case (undefined **)0x10000c5b7:
        unaff_RBP[-0x2e] = (long)UNRECOVERED_JUMPTABLE_15;
        uVar48 = uVar48 ^ 0x40;
        unaff_RBP[-0x23] = (long)((long)UNRECOVERED_JUMPTABLE_13 + 0x3166a98d);
        ppuVar45 = *(undefined ***)((long)UNRECOVERED_JUMPTABLE_13 + 0x3166a98d);
        unaff_RBP[-0x2d] = (long)ppuVar17;
        uVar33 = *(uint *)ppuVar17;
        uVar23 = (ulong)uVar33;
        puVar19 = (undefined *)0x100010fde;
switchD_10000e2c3_caseD_c5ea:
        uVar31 = uVar48 + 0xee4d4706 & 0x11b2b8ff;
        unaff_RBP[-10] = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                         [(int)(uVar31 + (UNRECOVERED_JUMPTABLE < ppuVar45))] +
                             0x10000c612))
                             ((uVar33 - ((uint)(uVar23 << (((char)uVar31 - 2U ^ 0x15) & 0x3f)) &
                                        ((uVar31 + 0x34 | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,
                              ppuVar45,puVar19,
                              (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                                  [(int)(uVar31 + (UNRECOVERED_JUMPTABLE < ppuVar45)
                                                        )] + 0x10000c612));
        return ppuVar17;
      case (undefined **)0x10000c647:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000c799:
        unaff_RBP[-0x19] = (long)ppuVar34;
        lVar18 = (*(code *)unaff_RBP[-0x10])
                           ((uVar48 + 0x76fcfc0a & 0x890303f3 ^ (uVar48 ^ 0xb8) * 0xb ^ 0xc180143d)
                            + uStack_38);
        iVar46 = *(int *)((long)(int)(uVar48 + (lVar18 == 0)) * 4 + 0x6d94841a1ee4c12e);
        unaff_RBP[-0x2c] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010000c803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)((long)iVar46 + 0x10000c799))(unaff_RBP[-10]);
        return ppuVar17;
      case (undefined **)0x10000ca43:
        goto switchD_10000a6ae_caseD_ca43;
      case (undefined **)0x10000ca54:
                    /* WARNING: Could not recover jumptable at 0x00010000ca7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000c9da +
                             *(int *)((long)(int)(uVar8 + uVar2) * 4 + 0x6d94841a1ee4c12e)))
                             (&DAT_10000c9da +
                              *(int *)((long)(int)(uVar8 + uVar2) * 4 + 0x6d94841a1ee4c12e));
        return ppuVar17;
      case (undefined **)0x10000cc86:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000d09b:
                    /* WARNING: Could not recover jumptable at 0x00010000d0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)*(int *)((long)(int)((uVar13 & 1) + uVar26) * 4 +
                                            0x6d94841a1ee4c12e) + 0x10000d08c))();
        return ppuVar17;
      case (undefined **)0x10000d1e2:
        *(byte *)param_5 = *(char *)param_5 + bVar11;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(byte *)(ppuVar17 + 0x200) = (char)*(code *)(ppuVar17 + 0x200) + bVar35;
        puVar19 = (undefined *)(*(code *)unaff_RBP[-0x10])();
        *ppuVar34 = puVar19;
                    /* WARNING: Could not emulate address calculation at 0x00010000d201 */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(switchD_100010bcf::caseD_0 +
                     *(int *)((ulong)(puVar19 == (undefined *)0x0) * 4 + 0x6d94841a1ee4c12e)))();
        return ppuVar17;
      case (undefined **)0x10000d291:
        iRam000000003165f9b3 = uVar13 + 4;
        unaff_RBP[-10] = 0x3165f9b3;
                    /* WARNING: Could not recover jumptable at 0x00010000d2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000d21b +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)(((uVar2 ^ (uVar8 | uVar43) ^ 0xb7efa938) +
                                                  (uVar8 | uVar43) * 2 == -0x48105681) + uVar27) * 4
                                     )))();
        return ppuVar17;
      case (undefined **)0x10000d518:
                    /* WARNING: Could not recover jumptable at 0x00010000d545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_10000d501 +
                             *(int *)((long)(int)(uVar48 + 0xf91fe73 +
                                                 (uint)(uVar13 + uVar27 == -0x30f8feaf)) * 4 +
                                     0x3165f9b3)))
                             (ppuVar17,param_2,
                              &LAB_10000d501 +
                              *(int *)((long)(int)(uVar48 + 0xf91fe73 +
                                                  (uint)(uVar13 + uVar27 == -0x30f8feaf)) * 4 +
                                      0x3165f9b3));
        return ppuVar17;
      case (undefined **)0x10000d56e:
        iVar46 = (uVar44 ^ 0xd8e123c4) * 0x65773fe7;
        *(uint *)(unaff_RBP + -7) = iVar46 + uVar26 + -0x3a;
        *(uint *)((long)unaff_RBP + -0x3c) = uVar2 + iVar46 + uVar26 + -0x1b + uVar13;
        FUN_100014c30();
        uVar33 = (&switchdataD_1006cfa50)
                 [(int)((*(int *)((long)unaff_RBP + -0x34) == 0x52e88d51) + uVar26)];
        unaff_RBP[-0xc] = 0x650a959f740c42c3;
                    /* WARNING: Could not recover jumptable at 0x00010000d5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_10000d548 + (int)uVar33))();
        return ppuVar17;
      case (undefined **)0x10000d70d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000d7c7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000d876:
        lVar18 = (*(code *)unaff_RBP[-0x10])(0x18);
        uVar33 = (&switchdataD_1006cfa50)[(int)(uVar48 + (lVar18 == 0))];
        *(undefined4 *)(unaff_RBP + -0xf) = 0x3165f9b2;
                    /* WARNING: Could not recover jumptable at 0x00010000d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_10000d868 + (int)uVar33))();
        return ppuVar17;
      case (undefined **)0x10000db3f:
        return (undefined **)((ulong)&stack0xfffffffffffffff8 & 0xffffffff);
      case (undefined **)0x10000dc90:
        ppuVar17 = (undefined **)FUN_100013d14(unaff_RBP[-9]);
        return ppuVar17;
      case (undefined **)0x10000e405:
                    /* WARNING: Could not emulate address calculation at 0x00010000e41a */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000e331 +
                             (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                  [(int)((UNRECOVERED_JUMPTABLE == (undefined **)0x0) + 0x1ee4c12e)]
                             ))(ppuVar17,param_2,
                                &DAT_10000e331 +
                                (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                     [(int)((UNRECOVERED_JUMPTABLE == (undefined **)0x0) +
                                           0x1ee4c12e)],0x650a959f740c42c3,0x3165f9b2);
        return ppuVar17;
      case (undefined **)0x10000ea20:
        *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar11;
        pcVar15 = (char *)(((ulong)CONCAT22(uVar7,CONCAT11(bVar35 + bVar11,cVar9)) - 0x4b) +
                          (long)UNRECOVERED_JUMPTABLE_13 * 4);
        *pcVar15 = *pcVar15 + (char)cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000eb56:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000ecf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10000f0d1:
        *UNRECOVERED_JUMPTABLE_12 = (undefined *)UNRECOVERED_JUMPTABLE_15;
                    /* WARNING: Could not recover jumptable at 0x00010000f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000f0ba +
                             *(int *)((long)(int)(uVar2 + (UNRECOVERED_JUMPTABLE_12[6] ==
                                                          (undefined *)0x0)) * 4 + 0x3166a97d)))
                             (UNRECOVERED_JUMPTABLE_12[6],param_2,
                              &DAT_10000f0ba +
                              *(int *)((long)(int)(uVar2 + (UNRECOVERED_JUMPTABLE_12[6] ==
                                                           (undefined *)0x0)) * 4 + 0x3166a97d));
        return ppuVar17;
      case (undefined **)0x10000f129:
        uVar33 = (*(code *)(ppuVar34[uVar26 & 0x54057219] + -3))
                           (*(undefined4 *)(ppuVar34[(long)UNRECOVERED_JUMPTABLE] + -2),
                            *(undefined8 *)unaff_RBP[-0xf],
                            *(int *)(unaff_RBP[-0xf] + 0xc) + -0x578a9194,unaff_RBP + -0x21,
                            (long)unaff_RBP + -0x84);
                    /* WARNING: Could not recover jumptable at 0x00010000f1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000f0f9 +
                             *(int *)(&DAT_1006d03f0 +
                                     (long)(int)(((uVar33 ^ 0x6befdffe) + (uVar33 * 2 & 0x49574c12)
                                                 == 0x7befe001) + uVar26) * 4)))();
        return ppuVar17;
      case (undefined **)0x10000f324:
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + 99) =
             (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 99) + (char)cVar10);
      case (undefined **)0x10000f309:
        puVar19 = (undefined *)(*(code *)unaff_RBP[-0x14])();
        *ppuVar34 = puVar19;
                    /* WARNING: Could not recover jumptable at 0x00010000f333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10000f2d3 +
                             *(int *)(&DAT_1006d03f0 +
                                     (long)(int)(uVar48 + (puVar19 == (undefined *)0x0)) * 4)))();
        return ppuVar17;
      case (undefined **)0x10000f43b:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000f4f7:
        *(int *)((long)UNRECOVERED_JUMPTABLE + 1) = *(int *)((long)UNRECOVERED_JUMPTABLE + 1) + -1;
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000f506:
                    /* WARNING: Could not recover jumptable at 0x00010000f508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_15)();
        return ppuVar17;
      case (undefined **)0x10000f628:
        return UNRECOVERED_JUMPTABLE;
      case (undefined **)0x10000fb41:
        uVar33 = uVar27 & 0x37efa97f | uVar8;
        *(uint *)UNRECOVERED_JUMPTABLE_15 = uVar44 + 4;
        lVar18 = (long)*(int *)((long)(int)(((undefined **)UNRECOVERED_JUMPTABLE_13 ==
                                            (undefined **)0x6d94841a1ee4c12e) + uVar13) * 4 +
                               0x3166a97d);
        UNRECOVERED_JUMPTABLE_14 = (code *)(lVar18 + 0x10000fb64);
                    /* WARNING: Could not recover jumptable at 0x00010000fb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*UNRECOVERED_JUMPTABLE_14)
                             (uVar33,uVar44 + 4,UNRECOVERED_JUMPTABLE_14,lVar18,
                              ((uVar27 | uVar8) ^ 0xb7efa97f) + uVar33 * 2 + 0x7976fffe);
        return ppuVar17;
      case (undefined **)0x10000fbb8:
        UNRECOVERED_JUMPTABLE_13 = (code *)((long)UNRECOVERED_JUMPTABLE_13 + 99);
        *UNRECOVERED_JUMPTABLE_13 =
             (code)((byte)*UNRECOVERED_JUMPTABLE_13 >> ((byte)cVar10 & 7) |
                   (char)*UNRECOVERED_JUMPTABLE_13 << 8 - ((byte)cVar10 & 7));
        pcVar15 = (char *)(((ulong)unaff_RBP & 0xffffffff) - 0x73);
        *pcVar15 = *pcVar15 + (char)cVar10;
                    /* WARNING: Could not recover jumptable at 0x00010000fbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_15))
                             (0x3165f9b3,(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_15),0)
        ;
        return ppuVar17;
      case (undefined **)0x10000fd0c:
        unaff_RBP[-9] = 0x3165f9b3;
        bVar40 = uVar27 < 0xcb5f9060;
        if (uVar43 < uVar2 * 9 + 0xcb5f8fa3 == uVar27 < 0xcb5f9060) {
          bVar40 = uVar42 < uVar27;
        }
        iVar46 = *(int *)((long)(int)(bVar40 + uVar44) * 4 + 0x6d94841a1ee4c12e);
        unaff_RBP[-0x27] = (long)((long)ppuVar49 + unaff_RBP[-9]);
                    /* WARNING: Could not recover jumptable at 0x00010000fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_10000fccb + iVar46))(&DAT_10000fccb + iVar46);
        return ppuVar17;
      case (undefined **)0x10000fdb0:
        uVar33 = uVar33 * 2 + 0x9310a902;
        uVar44 = (uVar33 ^ 0x777fbf7f) + (uVar33 & 0xf77fbf7e) * 2 + uVar44;
        bVar40 = uVar2 < uVar44;
        if (uVar2 < 0x2f96cbd5 != uVar44 < 0x2f96cbd5) {
          bVar40 = uVar44 < 0x2f96cbd5;
        }
                    /* WARNING: Could not recover jumptable at 0x00010000fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)ppuVar17 +
                             (long)*(int *)((long)(int)(bVar40 + uVar13 + -0x18bbc7bd) * 4 +
                                           0x6d94841a1ee4c12e)))();
        return ppuVar17;
      case (undefined **)0x10001020a:
        lVar18 = unaff_RBP[-9];
        (*(code *)unaff_RBP[-0xd])
                  (*(undefined8 *)(lVar18 + -0x3c616f4ea01f76b0),param_2,
                   uStack_38 ^ *(uint *)UNRECOVERED_JUMPTABLE_13);
        *(long *)(lVar18 + -0x3c616f4ea01f76b0) = unaff_RBP[-0x2a];
        *(int *)unaff_RBP[-0x3c] = (int)unaff_RBP[-0x1e];
        piVar16 = (int *)unaff_RBP[-0x33];
        iVar46 = *piVar16;
        lVar18 = *(long *)(lVar18 + -0x3c616f4ea01f76b0);
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xf56bfc98)) = 0;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xf56bfc99)) = 0;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xf56bfc9a)) = 0;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xf56bfc9b)) = 1;
        iVar46 = *piVar16;
        unaff_RBP[-0x33] = (long)piVar16;
        *piVar16 = iVar46 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000102d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)iRam6d94841a1ee4c4ae + 0x1000102aa))(unaff_RBP[-10]);
        return ppuVar17;
      case (undefined **)0x1000103c0:
                    /* WARNING: Could not recover jumptable at 0x0001000103e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)*(int *)((long)(int)(uVar43 + (uVar27 < ((bVar50 - 7 | 1) ^ 0x14
                                                                            ))) * 4 +
                                            0x6d94841a1ee4c12e) + 0x1000103c0))();
        return ppuVar17;
      case (undefined **)0x1000103dd:
        pcVar15 = (char *)((long)unaff_RBP + (long)UNRECOVERED_JUMPTABLE_13 * 4 + 5);
        *pcVar15 = *pcVar15 + (char)cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100010427:
        *(code *)((long)UNRECOVERED_JUMPTABLE + -0x77) =
             (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE + -0x77) | 3);
                    /* WARNING: Could not recover jumptable at 0x00010001044e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000103ee +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)((UNRECOVERED_JUMPTABLE == (undefined **)0x0) +
                                                0x1ee4c12e) * 4)))
                             (ppuVar17,param_2,0x6d94841a1ee4c12e,
                              &DAT_1000103ee +
                              *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                      (long)(int)((UNRECOVERED_JUMPTABLE == (undefined **)0x0) +
                                                 0x1ee4c12e) * 4));
        return ppuVar17;
      case (undefined **)0x10001049a:
        if ((undefined **)UNRECOVERED_JUMPTABLE_13 == (undefined **)0x1) {
          in(0x6b);
                    /* WARNING: Could not recover jumptable at 0x0001000104e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar17 = (undefined **)
                     (*(code *)(&UNK_1000104aa + (int)(&switchdataD_1006cfa50)[(int)(uVar26 ^ 0xc)])
                     )();
          return ppuVar17;
        }
        out(*(uint *)param_2,uVar30);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100010576:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100010654:
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar13 + 0xf56bfc9a)) = (code)0x0;
        *(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar13 + uVar33 + 0xf56bfbe4)) =
             (code)0x1;
        unaff_RBP[-0x38] = (long)UNRECOVERED_JUMPTABLE_12;
        *(int *)UNRECOVERED_JUMPTABLE_12 = *(int *)UNRECOVERED_JUMPTABLE_12 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000106a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)*(int *)((long)(int)(uVar33 + 1) * 4 + 0x6d94841a1ee4c12e) +
                             0x10001067c))();
        return ppuVar17;
      case (undefined **)0x100010950:
                    /* WARNING: Could not recover jumptable at 0x000100010972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_5 +
                             (long)*(int *)((long)(int)((uVar32 & 0xff | 6) + uVar2) * 4 +
                                           0x6d94841a1ee4c12e)))(0);
        return ppuVar17;
      case (undefined **)0x1000109f4:
        iVar46 = *(int *)((long)(int)uVar33 * 4 + 0x6d94841a1ee4c12e);
        unaff_RBP[-0x27] = 0;
        unaff_RBP[-0x1a] = 0;
        unaff_RBP[-0x1c] = 0;
        unaff_RBP[-0x1b] = 0;
        unaff_RBP[-10] = 0x742c45ff88570c30;
        unaff_RBP[-0x12] = 0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100010a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000109c3 + iVar46))(ppuVar17,param_2,&DAT_1000109c3 + iVar46,0);
        return ppuVar17;
      case (undefined **)0x100010a7f:
        *(undefined4 *)unaff_RBP[-0x33] = 0x3165f9b3;
        *(undefined4 *)(unaff_RBP + -0xd) = 0x3166a97d;
                    /* WARNING: Could not recover jumptable at 0x000100010abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_100010a9a + (int)*(uint *)((long)ppuVar17 + 0x7b9304bc)))();
        return ppuVar17;
      case (undefined **)0x100010bbd:
        pcVar15 = (char *)(((ulong)unaff_RBP & 0xffffffff) - 0x73);
        *pcVar15 = *pcVar15 + (char)cVar10;
                    /* WARNING: Could not recover jumptable at 0x000100010bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)UNRECOVERED_JUMPTABLE_13 + (ulong)(uVar37 | 0xffffffe2)))();
        return ppuVar17;
      case (undefined **)0x100010c67:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100010cf9:
        bVar40 = uVar33 < uVar2;
        if (bVar50 != uVar2 < 0x733c3e52) {
          bVar40 = uVar2 < 0x733c3e52;
        }
                    /* WARNING: Could not recover jumptable at 0x000100010d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_2 +
                             (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                        [(int)(uVar13 + 0xf91fe1e + (uint)bVar40)]))();
        return ppuVar17;
      case (undefined **)0x100010ddb:
        *(code *)((long)UNRECOVERED_JUMPTABLE + -0x7d) = cVar10;
        *(uint *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) =
             *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7d) + uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100010f1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x1000110e0:
        uVar33 = uVar26 * 2 + 0xdf071318;
        uVar33 = uVar13 + (uVar33 ^ 0xd37df7ff) + (uVar33 & 0xd37df7fe) * 2 + 0xa0446557;
        bVar40 = uStack_38 < uVar33;
        if (uVar44 < uVar2 != uVar33 < 0x73c25e02) {
          bVar40 = uVar33 < 0x73c25e02;
        }
                    /* WARNING: Could not recover jumptable at 0x00010001114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)param_2 +
                             (long)*(int *)((long)(int)(bVar40 + uVar13) * 4 + 0x3166a97d)))();
        return ppuVar17;
      case (undefined **)0x1000112dd:
        *(ulong *)((long)ppuVar34 + (long)ppuVar49) = (ulong)*(uint *)(unaff_RBP + -0x2a);
        *(int *)unaff_RBP[-0x32] = (int)unaff_RBP[-0x1c];
        piVar16 = (int *)unaff_RBP[-0x2d];
        iVar46 = *piVar16;
        uVar33 = uVar48 * 2 ^ 0x15e;
        unaff_RBP[-0x15] = (long)UNRECOVERED_JUMPTABLE_13;
        lVar18 = *(long *)((long)UNRECOVERED_JUMPTABLE_13 + (long)ppuVar49);
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xa8756e6c)) = 0x77;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xa8756e6d)) = 0x15;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + uVar33 + 0xa8756da2)) = 0x48;
        *(undefined1 *)(lVar18 + (ulong)(iVar46 + 0xa8756e6f)) = 0x8c;
        unaff_RBP[-0x2d] = (long)piVar16;
        *piVar16 = *piVar16 + 4;
                    /* WARNING: Could not recover jumptable at 0x000100011382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)(uVar33 + 1) * 4) +
                             0x10001135e))();
        return ppuVar17;
      case (undefined **)0x100011393:
                    /* WARNING: Could not recover jumptable at 0x0001000113b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100011385 +
                             *(int *)((long)(int)(uVar2 + (UNRECOVERED_JUMPTABLE_12[8] ==
                                                          (undefined *)0x0)) * 4 +
                                     0x6d94841a1ee4c12e)))
                             (UNRECOVERED_JUMPTABLE_12[8],param_2,
                              &DAT_100011385 +
                              *(int *)((long)(int)(uVar2 + (UNRECOVERED_JUMPTABLE_12[8] ==
                                                           (undefined *)0x0)) * 4 +
                                      0x6d94841a1ee4c12e));
        return ppuVar17;
      case (undefined **)0x10001142a:
        *(undefined4 *)(ppuVar34 + 1) = 0x107c8674;
                    /* WARNING: Could not recover jumptable at 0x000100011465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_10001141e +
                             *(int *)((long)param_5 +
                                     (long)(int)(uVar48 + ((ulong)(uVar26 + 0xf7c) <
                                                          (ulong)unaff_RBP[-0x22])) * 4)))
                             (uVar27 & 0x15d36d8d,unaff_RBP[-0x23],UNRECOVERED_JUMPTABLE_15,
                              &DAT_10001141e +
                              *(int *)((long)param_5 +
                                      (long)(int)(uVar48 + ((ulong)(uVar26 + 0xf7c) <
                                                           (ulong)unaff_RBP[-0x22])) * 4));
        return ppuVar17;
      case (undefined **)0x100011539:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x10001153e:
                    /* WARNING: Could not recover jumptable at 0x000100011544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_15)();
        return ppuVar17;
      case (undefined **)0x100011569:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100011677:
switchD_10000a6ae_caseD_11677:
        *(int *)((long)UNRECOVERED_JUMPTABLE_13 + 0xd083d8) =
             *(int *)((long)UNRECOVERED_JUMPTABLE_13 + 0xd083d8) + (int)UNRECOVERED_JUMPTABLE_13;
        *(undefined4 *)(UNRECOVERED_JUMPTABLE_14 + 8) = 0x5daafa27;
        iVar46 = *(int *)(puVar19 + (long)(int)UNRECOVERED_JUMPTABLE * 4);
        unaff_RBP[-0x19] = (long)(ppuVar49[(int)(uVar33 | 10)] + -0xb);
        unaff_RBP[-0x26] = (long)(ppuVar49[(int)(uVar33 + 0xc)] + -1);
        unaff_RBP[-0x1a] = (long)ppuVar17;
        unaff_RBP[-0x10] = (long)ppuVar17;
        unaff_RBP[-0x1c] = (long)ppuVar17;
        unaff_RBP[-0x1b] = (long)ppuVar17;
        unaff_RBP[-10] = (long)param_2;
        unaff_RBP[-0x12] = (long)param_2;
        unaff_RBP[-0xf] = (long)UNRECOVERED_JUMPTABLE_14;
                    /* WARNING: Could not recover jumptable at 0x0001000116f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(FUN_10001164e + iVar46))();
        return ppuVar17;
      case (undefined **)0x1000117a5:
                    /* WARNING: Could not recover jumptable at 0x0001000117af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)CONCAT71(uVar25,DAT_807d8b48985d8b44))();
        return ppuVar17;
      case (undefined **)0x100011827:
        uVar33 = *(uint *)((long)ppuVar49 + (long)(int)(uVar13 + 0xf91fe70 + (uint)bVar51) * 4);
        unaff_RBP[-0x15] = unaff_RBP[-0x19];
        unaff_RBP[-0x1b] = (long)ppuVar34;
                    /* WARNING: Could not recover jumptable at 0x00010001186d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_1000115f8_2 + (int)uVar33))
                             (ppuVar17,unaff_RBP[-0xe],UNRECOVERED_JUMPTABLE_15,ppuVar34,
                              unaff_RBP[-9],unaff_RBP[-0x14]);
        return ppuVar17;
      case (undefined **)0x1000118f4:
        *(char *)((long)unaff_RBP + -0x73) = *(char *)((long)unaff_RBP + -0x73) + '\x01';
        out(0x65,(int)CONCAT71(uVar25,*(code *)((long)UNRECOVERED_JUMPTABLE_13 + -0x7f)));
        _DAT_03443d1c = 0x100011929;
        uVar33 = (**(code **)((long)UNRECOVERED_JUMPTABLE_13 + 0x18b354ff8))
                           (*(undefined4 *)
                             (*(undefined **)
                               ((long)UNRECOVERED_JUMPTABLE_13 +
                               (long)(int)((uint)CONCAT71(uVar25,*(code *)((long)
                                                  UNRECOVERED_JUMPTABLE_13 + -0x7f)) & 0xffffffa3) *
                               8) + -2),unaff_RBP[-0x26],UNRECOVERED_JUMPTABLE_12);
                    /* WARNING: Could not emulate address calculation at 0x00010001195a */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000118e2 +
                             *(int *)(&DAT_1006d03f0 +
                                     (long)(int)(((uVar33 << ((char)ppuVar49 - 0x24U & 0x1f) &
                                                  0x62ae0686) + (uVar33 ^ 0xf7f7b9fd) == -0x8084603)
                                                + 0x3166a97d) * 4)))();
        return ppuVar17;
      case (undefined **)0x1000119e6:
        bVar40 = uVar2 < 0x3165f9b3;
        if (SUB81(param_6,0) != 0x3165f9b3 < uVar44) {
          bVar40 = 0x3165f9b3 < uVar44;
        }
                    /* WARNING: Could not recover jumptable at 0x000100011a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)ppuVar17 +
                             (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                        [(int)(bVar40 + uVar13)]))();
        return ppuVar17;
      case (undefined **)0x100011b78:
        bVar40 = false;
        UNRECOVERED_JUMPTABLE_13 = (code *)ppuVar17;
code_r0x000100011b7a:
        uVar33 = (uint)(uVar43 < uStack_38);
        if (bVar40 != SUB81(param_6,0)) {
          uVar33 = (uint)param_6;
        }
                    /* WARNING: Could not recover jumptable at 0x000100011bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100011b2f +
                             *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                     (long)(int)(uVar33 + uVar2) * 4)))
                             (UNRECOVERED_JUMPTABLE_13,param_2,
                              &DAT_100011b2f +
                              *(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                                      (long)(int)(uVar33 + uVar2) * 4));
        return ppuVar17;
      case (undefined **)0x100011bb8:
        if ((long)UNRECOVERED_JUMPTABLE_13 < -0x10000a624) {
                    /* WARNING: Could not recover jumptable at 0x000100011bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar17 = (undefined **)
                     (*(code *)(&DAT_100011bb6 +
                               *(int *)((long)(int)((unaff_RBP[-0xc] == 0x4469798c814565b9) + uVar2)
                                        * 4 + 0x3165f9b3)))
                               (ppuVar17,param_2,
                                &DAT_100011bb6 +
                                *(int *)((long)(int)((unaff_RBP[-0xc] == 0x4469798c814565b9) + uVar2
                                                    ) * 4 + 0x3165f9b3));
          return ppuVar17;
        }
        if (!bVar52 && -0x10000a625 < (long)UNRECOVERED_JUMPTABLE_13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_6 = (code *)(ulong)(uStack_38 < 0xfc309c78);
        bVar40 = uVar43 < 0xfc309c78;
        goto code_r0x000100011b7a;
      case (undefined **)0x100011bc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100011bfa:
        *(int *)UNRECOVERED_JUMPTABLE_13 = *(int *)UNRECOVERED_JUMPTABLE_13 + 1;
        lVar18 = (*(code *)unaff_RBP[-0xf])
                           (uVar26 + uStack_38 + 4 + ((uVar26 + 0x38 | 0x90) ^ 0x203800d6));
        lVar18 = (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                            [(int)(uVar26 + (lVar18 == 0))];
        unaff_RBP[-0xc] = 0x3166a97d;
        unaff_RBP[-0x18] = lVar18;
        unaff_RBP[-0x1a] = lVar18;
        unaff_RBP[-0x17] = lVar18;
        unaff_RBP[-0x33] = 0;
        unaff_RBP[-0x11] = 0;
                    /* WARNING: Could not recover jumptable at 0x000100011c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)(*(code *)(&DAT_100011bf4 + lVar18))();
        return ppuVar17;
      case (undefined **)0x100011c5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100011e51:
        func_0xffe69f9a();
        out(*(uint *)param_2,extraout_DX);
        unaff_RBP[-0x26] = 0;
        *(undefined4 *)((long)unaff_RBP + -0x7c) = 0;
        uVar3 = *(undefined4 *)
                 ((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar26 & 0xbb73221c)] + -2);
        uVar22 = *(undefined8 *)param_6;
        iVar46 = *(int *)(param_6 + 0xc);
        puVar19 = (&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar26 ^ 0x72)];
        unaff_RBP[-10] = (long)(puVar19 + -3);
        uVar33 = (*(code *)(puVar19 + -3))
                           (uVar3,uVar22,iVar46 + -0x5026187e,unaff_RBP + -0x26,
                            (long)unaff_RBP + -0x7c);
                    /* WARNING: Could not recover jumptable at 0x000100011ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100011e3e +
                             *(int *)((long)(int)(((uVar33 ^ 0xfbefd777) + (uVar33 * 2 & 0x16c46f8d)
                                                  == 0xbefd77a) + uVar26) * 4 + 0x3166a97d)))();
        return ppuVar17;
      case (undefined **)0x10001201d:
        if (bVar52 || (long)UNRECOVERED_JUMPTABLE_13 < -0x10000a624) {
          out(uVar30,uVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar33 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 +
                                      (ulong)((uVar44 + (uint)bVar50 * 2 ^ 0x8135ba64) + uVar13)) |
                 (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 + (ulong)(uVar13 + 0x8135ba28)
                                      ) << 8 |
                 (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 + (ulong)(uVar13 + 0x8135ba27)
                                      ) << 0x10 |
                 (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_15 + (ulong)(uVar13 + 0x8135ba26)
                                      ) << 0x1f;
        iVar46 = (uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2 + 0x7976fffe;
        **(int **)(((ulong)param_2 & 0xffffffff) - 0x50) = uVar13 + 8;
        *(int *)(((ulong)param_2 & 0xffffffff) - 0x94) = iVar46;
        UNRECOVERED_JUMPTABLE =
             (undefined **)
             (long)*(int *)((long)UNRECOVERED_JUMPTABLE_12 +
                           (long)(int)((iVar46 == 0x3166a97d) + uVar27) * 4);
        goto code_r0x00010001204d;
      case (undefined **)0x10001204b:
        UNRECOVERED_JUMPTABLE = (undefined **)CONCAT71(uVar25,bVar11 + 0x86);
code_r0x00010001204d:
                    /* WARNING: Could not recover jumptable at 0x000100012057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)UNRECOVERED_JUMPTABLE + 0x100011fbe))
                             (ppuVar17,(code *)((long)UNRECOVERED_JUMPTABLE + 0x100011fbe));
        return ppuVar17;
      case (undefined **)0x10001204e:
        goto code_r0x00010001204d;
      case (undefined **)0x10001233a:
        *(uint *)((long)UNRECOVERED_JUMPTABLE + -0x77) =
             *(int *)((long)UNRECOVERED_JUMPTABLE + -0x77) + uVar2;
        uVar39 = (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x6d94841b1ee56759) |
                 (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x6d94841b1ee56758) << 8 |
                 (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x6d94841b1ee56757) << 0x10
                 | (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x6d94841b1ee56756) <<
                   0x18 | (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x6d94841b1ee56755
                                                ) << 0x20 |
                          (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_13 + 0x6d94841b1ee56754
                                                ) << 0x28 | 0x3165f9b3 |
                          0x1006cfa50 << ((bVar40 ^ 0x61U) & 0x3f);
        uVar23 = (ulong)((int)_DAT_ffffff30 + 0xba4c2eb3);
        param_5[uVar23 * 4] =
             (undefined *)
             ((uVar39 + 0xfebfb2c2307463a) - (uVar39 * 2 & 0x1fd7f658460e8c74) ^ 0xfebfb2c2307463a);
        iVar46 = *(int *)param_6;
        *(int *)param_6 = iVar46 + 8;
        uVar33 = (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba2d)) |
                 (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba2c)) << 8 |
                 (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba2b)) << 0x10 |
                 (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba2a)) << 0x18;
        *(uint *)(param_5 + uVar23 * 4 + 1) =
             (uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2 + 0x48105681;
        iVar46 = *(int *)param_6;
        *(int *)param_6 = iVar46 + 4;
        uVar33 = (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba29)) |
                 (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba28)) << 8 |
                 (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba27)) << 0x10 |
                 (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar46 + 0x8135ba26)) << 0x18;
        *(uint *)((long)param_5 + uVar23 * 0x20 + 0xc) =
             (uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2 + 0x48105681;
        iVar46 = *(int *)param_6;
        *(int *)param_6 = iVar46 + 4;
        iVar14 = *(int *)((long)param_5 + uVar23 * 0x20 + 0xc);
        iVar46 = iVar46 + *(int *)(param_5 + uVar23 * 4 + 1);
        bVar50 = 0xd19f6332 < (uint)(iVar14 + -0x7eca45da + iVar46);
        bVar40 = *(int *)UNRECOVERED_JUMPTABLE_15 + 0x6af5fa6U < iVar14 + iVar46 + 0xaf9656f3U;
        if (*(int *)UNRECOVERED_JUMPTABLE_15 + 0x6af5fa6U < 0x2e609ccd != bVar50) {
          bVar40 = bVar50;
        }
                    /* WARNING: Could not recover jumptable at 0x000100012529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_1000122e5 +
                             (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                  [(int)(bVar40 + uVar26)]))();
        return ppuVar17;
      case (undefined **)0x1000126cf:
        (*(code *)(*(undefined **)((long)UNRECOVERED_JUMPTABLE_13 + (long)(int)(uVar48 ^ 0x1d) * 8)
                  + -2))();
        *(undefined4 *)((long)unaff_RBP + -0xac) = 0x1ee4c12e;
        UNRECOVERED_JUMPTABLE_13 = (code *)unaff_RBP[-0x12];
        uVar33 = uVar26 - 0x27 | 0x29;
        unaff_RBP[-0x12] = (long)UNRECOVERED_JUMPTABLE_13;
        if (*(uint *)(unaff_RBP + -10) == (uVar33 ^ 0x3166a942)) {
          UNRECOVERED_JUMPTABLE_14 = UNRECOVERED_JUMPTABLE_13;
        }
        unaff_RBP[-0xc] = (long)UNRECOVERED_JUMPTABLE_14;
                    /* WARNING: Could not recover jumptable at 0x000100012754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&LAB_10000bc87 +
                             (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                  [(int)((*(uint *)(unaff_RBP + -10) ==
                                         ((uVar33 ^ 10) + 0xe ^ 0x3166a93e)) + uVar33)]))
                             (unaff_RBP[-0xb]);
        return ppuVar17;
      case (undefined **)0x100012964:
        *(ulong *)((long)ppuVar34 + (long)ppuVar49) = (ulong)*(uint *)(unaff_RBP + -0x28);
        *(int *)unaff_RBP[-0x30] = (int)unaff_RBP[-0x1b];
        ppuVar34 = (undefined **)unaff_RBP[-0xe];
        iVar46 = *(int *)ppuVar34;
LAB_100012984:
        unaff_RBP[-0x15] = (long)UNRECOVERED_JUMPTABLE_13;
        lVar18 = *(long *)((long)UNRECOVERED_JUMPTABLE_13 + (long)ppuVar49);
        lVar29 = (unaff_RBP[-0x34] -
                 (unaff_RBP[-0x34] << (((char)uVar48 + 8U ^ 0x88) & 0x3f) & 0x681f333462e1d3ccU)) +
                 -0x4bf06665ce8f161a;
        lVar24 = ((ulong)(iVar46 + 0xa8756e6cU) ^ 0x7effbe781dfebded) +
                 (ulong)(iVar46 + 0xa8756e6cU & 0x1dfebded) * 2 + -0x7effbe781dfebded;
        *(byte *)(lVar18 + lVar24) = (byte)((ulong)lVar29 >> 0x38) ^ 0xb4;
        *(byte *)(lVar18 + 1 + lVar24) = (byte)((ulong)lVar29 >> 0x30) ^ 0xf;
        *(byte *)(lVar18 + 2 + lVar24) = (byte)((ulong)lVar29 >> 0x28) ^ 0x99;
        *(byte *)(lVar18 + 3 + lVar24) = (byte)((ulong)lVar29 >> 0x20) ^ 0x9a;
        *(byte *)(lVar18 + 4 + lVar24) = (byte)((ulong)lVar29 >> 0x18) ^ 0x31;
        *(byte *)(lVar18 + 5 + lVar24) = (byte)((ulong)lVar29 >> 0x10) ^ 0x70;
        *(byte *)(lVar18 + 6 + lVar24) = (byte)((ulong)lVar29 >> 8) ^ 0xe9;
        *(byte *)(lVar18 + 7 + lVar24) = (byte)lVar29 ^ 0xe6;
        unaff_RBP[-0xe] = (long)ppuVar34;
        *(int *)ppuVar34 = *(int *)ppuVar34 + 8;
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)((long)*(int *)((long)(int)(uVar48 + 9) * 4 + 0x6d94841a1ee4c12e) +
                             0x100012a6d))();
        return ppuVar17;
      case (undefined **)0x100012aa4:
        *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x41) =
             *(int *)((long)UNRECOVERED_JUMPTABLE_13 + -0x41) + -1;
        iVar46 = -0x79e7137b;
        _DAT_8618ec35 = _DAT_8618ec35 - uVar33;
        goto LAB_100012984;
      case (undefined **)0x100012b4e:
        lVar18 = unaff_RBP[-0x16];
        *(uint *)(lVar18 + -0x742c45ff88570c28) =
             (uVar2 ^ 0x307f77f6) + (uVar13 & 0x307f77f6) * 2 + -0x20030182;
        *(undefined4 *)(lVar18 + -0x742c45ff88570c24) = 0x38d7f524;
        *(undefined4 *)(unaff_RBP + -0xd) = 0x3166a97d;
        ppuVar17 = (undefined **)FUN_100013f83();
        return ppuVar17;
      case (undefined **)0x100012d4e:
        uVar33 = (uVar26 + 0x5aa35602 & 0xa55ca9ff) + 0x41d30603;
        uVar33 = (uVar33 ^ 0xb3fe7675) + (uVar33 & 0x33fe7674) * 2 + 0xa4f48910;
        bVar40 = uVar2 + 0x79dc82c4 < uVar33;
        if ((uVar26 ^ 0xa70d0003) < uVar2 + uStack_38 + 0xef83898c != uVar33 < 0x58f2ff85) {
          bVar40 = uVar33 < 0x58f2ff85;
        }
                    /* WARNING: Could not recover jumptable at 0x000100012dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100010545 +
                             (int)*(uint *)((long)ppuVar17 + (long)(int)(bVar40 + uVar26) * 4)))();
        return ppuVar17;
      case (undefined **)0x100012f59:
        *(int *)unaff_RBP[-0x1d] = (int)unaff_RBP[-0x17];
        uVar23 = unaff_RBP[-0x25];
        lVar18 = unaff_RBP[-0xe];
        uVar48 = uVar48 ^ 0x9a;
        unaff_RBP[-0xe] = lVar18;
        UNRECOVERED_JUMPTABLE = *(undefined ***)((long)ppuVar34 + lVar18);
        uVar33 = uVar48 - 0x11 & (uint)uVar23;
        puVar19 = &DAT_100013441;
        ppuVar45 = (undefined **)unaff_RBP[-0x32];
        goto switchD_10000e2c3_caseD_c5ea;
      case (undefined **)0x100013121:
        lVar18 = (long)*(int *)((long)param_5 +
                               (long)(int)((uVar13 == uVar26 + 0x5aed971c) + uVar33) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100013146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar17 = (undefined **)
                   (*(code *)(&DAT_100013116 + lVar18))
                             (ppuVar17,&DAT_100013116 + lVar18,lVar18,uVar27 + 0x35);
        return ppuVar17;
      case (undefined **)0x1000131b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case (undefined **)0x100013490:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_6 = (code *)0xe2846d99;
      ppuVar17 = (undefined **)(ulong)((uint)ppuVar49 + 0x4077ba72 & 0xbf884597);
      param_5 = (undefined **)(ulong)((uint)ppuVar49 ^ 0xe6);
code_r0x00010000ac94:
      lVar18 = (long)*(int *)((long)puVar47 +
                             (long)(int)((int)ppuVar49 + (uint)(UNRECOVERED_JUMPTABLE < ppuVar45)) *
                             4);
      UNRECOVERED_JUMPTABLE_14 = (code *)(lVar18 + 0x10000ac7d);
                    /* WARNING: Could not recover jumptable at 0x00010000acc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar17 = (undefined **)
                 (*UNRECOVERED_JUMPTABLE_14)
                           (ppuVar17,(((int)param_2 + (int)param_6) -
                                     ((uint)((long)ppuVar34 << (((byte)ppuVar17 ^ 0x16) & 0x3f)) &
                                     (int)param_5 + (int)param_6)) + 0xebdc9a9,
                            UNRECOVERED_JUMPTABLE_15,lVar18,param_5,UNRECOVERED_JUMPTABLE_14);
      return ppuVar17;
    case true:
      switch(ppuVar17 == (undefined **)0x0) {
      case false:
        (*(code *)unaff_RBP[-0xc])();
        ppuVar17 = (undefined **)caseD_1();
        return ppuVar17;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == unaff_RBP[-6]) {
    return (undefined **)0xffff5035;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
switchD_10000a6ae_caseD_ca43:
  do {
  } while( true );
switchD_10000a6ae_caseD_a654:
  UNRECOVERED_JUMPTABLE_13 = (code *)(ulong)((int)UNRECOVERED_JUMPTABLE + 0x7e29f96c + uVar44);
  goto switchD_10000a6ae_caseD_a65b;
switchD_10000a6ae_caseD_a695:
  plVar36 = (long *)&stack0xfffffffffffffff8;
  cVar9 = '\x15';
  plVar4 = unaff_RBP;
  do {
    plVar4 = plVar4 + -1;
    plVar36 = plVar36 + -1;
    *plVar36 = *plVar4;
    cVar9 = cVar9 + -1;
  } while ('\0' < cVar9);
  goto code_r0x00010000a697;
switchD_10000a6ae_caseD_9d21:
                    /* WARNING: Could not recover jumptable at 0x000100009d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar17 = (undefined **)
             (*(code *)(&caseD_9d21_4 +
                       (int)(&switchdataD_1006cfa50)
                            [(int)((((uVar27 ^ 0x8b99e5b9) + 0x3166a8d0 ^ uVar26 & 0x74661aeb) ==
                                   0x3165f9b3) + uVar33)]))
                       (ppuVar17,param_2,
                        &caseD_9d21_4 +
                        (int)(&switchdataD_1006cfa50)
                             [(int)((((uVar27 ^ 0x8b99e5b9) + 0x3166a8d0 ^ uVar26 & 0x74661aeb) ==
                                    0x3165f9b3) + uVar33)]);
  return ppuVar17;
}

