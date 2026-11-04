// rea decompile_all
// name: _BrotliEncoderCompress
// address: 0x1c9acf
// body: available
// range: 0x1c9acf-0x1cb622 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1cb61e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_BrotliEncoderCompress
          (int param_1,uint param_2,undefined4 param_3,ulong param_4,undefined8 *****param_5,
          ulong *param_6,undefined2 *param_7)

{
  undefined8 ****ppppuVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 *puVar6;
  void *pvVar7;
  undefined8 ****ppppuVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *****pppppuVar11;
  long lVar13;
  void *pvVar14;
  undefined2 *puVar15;
  char cVar16;
  byte bVar17;
  undefined4 uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined7 uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  char *pcVar31;
  undefined8 uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  size_t sVar36;
  ulong uVar37;
  ulong uVar38;
  bool bVar39;
  ulong local_1020 [3];
  int local_1008;
  ulong local_7e8 [9];
  undefined4 local_79c;
  undefined8 ****local_758;
  undefined1 auStack_750 [16];
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined4 local_730;
  int local_72c;
  undefined8 ****local_728;
  undefined8 ****local_720;
  undefined8 local_718;
  undefined8 ****ppppuStack_710;
  undefined8 ****local_708;
  undefined8 local_700;
  undefined8 ****local_6f8;
  undefined8 ****local_6f0;
  long lStack_6e8;
  undefined4 *local_6e0;
  undefined8 uStack_6d8;
  undefined8 ***local_6d0;
  undefined8 uStack_6c8;
  undefined8 ****local_6c0;
  undefined8 ****local_6b8;
  long lStack_6b0;
  undefined4 *local_6a8;
  undefined8 uStack_6a0;
  undefined8 ***local_698;
  undefined8 uStack_690;
  undefined8 ****local_688;
  undefined8 ****local_680;
  undefined4 local_678;
  undefined4 *local_670;
  ulong local_328;
  undefined8 ****local_320;
  undefined8 ****local_318;
  ulong local_310 [6];
  undefined1 local_2e0 [48];
  undefined1 local_2b0 [48];
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  ulong local_230;
  ulong local_228;
  long local_220;
  ulong local_218;
  undefined8 ****local_210;
  ulong local_208;
  ulong local_200;
  undefined *local_1f8;
  ulong local_1f0;
  undefined2 *local_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined8 local_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int local_1bc;
  undefined8 local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188 [56];
  ulong local_150;
  long local_148;
  undefined8 ****local_140;
  ulong local_138;
  undefined8 local_130;
  undefined2 *local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  undefined2 *local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined2 *local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong *local_90;
  ulong local_88;
  void *local_80;
  ulong local_78;
  ulong local_70;
  undefined2 *local_68;
  undefined8 ****local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 *****pppppuVar12;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar29 = *param_6;
  if (param_4 == 0) {
    if (uVar29 == 0) {
      uVar32 = 0;
      goto LAB_001cb5f9;
    }
    *param_6 = 1;
    *(undefined1 *)param_7 = 6;
    goto LAB_001cb5f3;
  }
  uVar9 = param_4 + (param_4 >> 0xe) * 4 + 6;
  uVar32 = 0;
  uVar37 = 0;
  if (param_4 <= uVar9) {
    uVar37 = uVar9;
  }
  local_60 = param_5;
  if (uVar29 == 0) goto LAB_001cb5f9;
  local_f8 = uVar37;
  local_c8 = uVar29;
  local_70 = param_4;
  if (param_1 != 10) {
    uVar32 = 0;
    puVar10 = (undefined4 *)_BrotliEncoderCreateInstance(0,0,0);
    if (puVar10 == (undefined4 *)0x0) goto LAB_001cb5f9;
    local_1020[0] = local_70;
    local_758 = local_60;
    local_310[0] = *param_6;
    local_1e0 = SUB84(param_7,0);
    uStack_1dc = (uint)((ulong)param_7 >> 0x20);
    local_7e8[0] = 0;
    if (puVar10[0x86f] == 0) {
      puVar10[1] = param_1;
      puVar10[2] = param_2;
      *puVar10 = param_3;
      *(ulong *)(puVar10 + 6) = local_70 & 0xffffffff;
      if (0x18 < (int)param_2) {
        puVar10[9] = 1;
      }
    }
    iVar19 = _BrotliEncoderCompressStream
                       (puVar10,2,local_1020,&local_758,local_310,&local_1e0,local_7e8);
    if ((puVar10[0x86d] != 2) || (*(long *)(puVar10 + 0x864) != 0)) {
      iVar19 = 0;
    }
    *param_6 = local_7e8[0];
    _BrotliEncoderDestroyInstance();
    if ((iVar19 != 0) && ((local_f8 == 0 || (*param_6 <= local_f8)))) goto LAB_001cb5f3;
    goto LAB_001cb4f9;
  }
  uVar34 = 0x10;
  if (0x10 < (int)param_2) {
    uVar34 = param_2;
  }
  uVar29 = 0x1e;
  if ((int)uVar34 < 0x1e) {
    uVar29 = (ulong)uVar34;
  }
  uVar21 = (uint)uVar29;
  uVar37 = 1L << ((byte)uVar29 & 0x3f);
  if (param_4 < uVar37) {
    uVar37 = param_4;
  }
  cVar16 = '\x17';
  if ((int)uVar34 < 0x17) {
    cVar16 = (char)uVar34;
  }
  local_138 = 1L << (cVar16 + 1U & 0x3f);
  local_48 = 0xb00000004;
  uStack_40 = 0x100000000f;
  local_58 = 0xb00000004;
  uStack_50 = 0x100000000f;
  local_758 = (undefined8 *****)0x0;
  local_1e0 = 0;
  local_1bc = 0;
  uStack_1dc = 0xb;
  uStack_1d8 = 0x16;
  local_1d4 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  local_90 = param_6;
  _BrotliInitEncoderDictionary(local_188);
  ppppuVar8 = local_60;
  param_6 = local_90;
  local_1a0 = 0;
  uStack_198 = 0x4000000040;
  local_190 = 0x3fffffc;
  uVar34 = uVar21;
  uStack_1d8 = uVar21;
  if ((int)param_2 < 0x19) {
    uVar33 = 0x1e;
    if (local_1bc == 0) {
      uVar33 = 0x18;
    }
    if (uVar33 < uVar21) {
      uVar34 = 0x18;
      uStack_1d8 = uVar33;
    }
  }
  else {
    local_1bc = 1;
  }
  uStack_1dc = 10;
  if ((uint)local_1d4 == 0) {
    uVar33 = 0x10;
    if ((0x10 < uVar34) && (uVar33 = 0x12, uVar34 < 0x12)) {
      uVar33 = uVar34;
    }
  }
  else {
    uVar34 = 0x10;
    if (0x10 < (int)(uint)local_1d4) {
      uVar34 = (uint)local_1d4;
    }
    uVar33 = 0x18;
    if ((int)uVar34 < 0x18) {
      uVar33 = uVar34;
    }
  }
  local_1d4 = CONCAT44(local_1d4._4_4_,uVar33);
  _ChooseDistanceParams(&local_1e0);
  local_208 = 1L << ((byte)local_1d4 & 0x3f);
  _BrotliInitMemoryManager(local_1020,0,0,0);
  if (local_1bc == 0) {
    local_78 = 1;
    if (uVar21 == 0x10) {
      uVar29 = 0;
    }
    else {
      if (uVar21 != 0x11) {
        uVar34 = uVar21 * 2 - 0x21;
        local_78 = 4;
        goto LAB_001c9e1d;
      }
      local_78 = 7;
      uVar29 = CONCAT62((int6)(uVar29 >> 0x10),1);
    }
  }
  else {
    uVar34 = uVar21 << 8 | 0x11;
    local_78 = 0xe;
LAB_001c9e1d:
    uVar29 = (ulong)uVar34;
  }
  if ((undefined8 *****)local_758 != (undefined8 *****)0x0) {
    if (local_72c == 0) {
      iVar19 = (int)uStack_740;
      goto LAB_001ca3be;
    }
    goto LAB_001ca815;
  }
  if ((int)uStack_1dc < 10) {
    uVar34 = uStack_1dc;
    if (uStack_1dc == 4) {
      if (0xfffff < CONCAT44(uStack_1c4,uStack_1c8)) {
        local_1b8 = CONCAT44(local_1b8._4_4_,0x36);
        uVar34 = 0x36;
        goto LAB_001c9ef5;
      }
    }
    else if (4 < (int)uStack_1dc) {
      if (0x10 < (int)uStack_1d8) {
        iStack_1b0 = uStack_1dc - 1;
        if ((uStack_1d8 < 0x13) || (CONCAT44(uStack_1c4,uStack_1c8) < 0x100000)) {
          uVar18 = 0x10;
          if (uStack_1dc < 9) {
            uVar18 = 10;
          }
          local_1b8 = CONCAT44(0xf - (uint)(uStack_1dc < 7),5);
          local_1a8 = 4;
          if (6 < uStack_1dc) {
            local_1a8 = uVar18;
          }
          uVar34 = 5;
        }
        else {
          local_1b8 = 0xf00000006;
          uStack_1ac = 5;
          uVar18 = 0x10;
          if (uStack_1dc < 9) {
            uVar18 = 10;
          }
          local_1a8 = 4;
          if (6 < uStack_1dc) {
            local_1a8 = uVar18;
          }
          uVar34 = 6;
        }
        goto LAB_001c9ef5;
      }
      uVar34 = 0x28;
      if (6 < uStack_1dc) {
        uVar34 = 0x2a - (uStack_1dc < 9);
      }
    }
    local_1b8 = CONCAT44(local_1b8._4_4_,uVar34);
  }
  else {
    local_1b8 = CONCAT44(local_1b8._4_4_,10);
    uVar34 = 10;
  }
LAB_001c9ef5:
  pppppuVar12 = (undefined8 *****)0x0;
  pppppuVar11 = (undefined8 *****)0x0;
  bVar17 = local_1b8._4_1_;
  if ((int)uStack_1d8 < 0x19) {
    switch(uVar34 - 2) {
    case 0:
    case 1:
      goto switchD_001c9f1a_caseD_0;
    case 2:
      goto switchD_001c9f1a_caseD_2;
    case 3:
    case 4:
      goto switchD_001c9f1a_caseD_3;
    case 5:
    case 6:
    case 7:
      break;
    case 8:
      goto switchD_001c9f1a_caseD_8;
    default:
      switch(uVar34) {
      case 0x23:
        goto switchD_001c9f64_caseD_23;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        break;
      case 0x28:
      case 0x29:
        goto switchD_001c9f1a_caseD_2;
      case 0x2a:
        goto switchD_001c9f64_caseD_2a;
      default:
        if (uVar34 == 0x36) goto LAB_001ca0ae;
      }
    }
    goto switchD_001c9f1a_caseD_5;
  }
  pppppuVar11 = pppppuVar12;
  switch(uVar34 - 2) {
  case 0:
switchD_001c9f1a_caseD_0:
    break;
  case 1:
    local_1b8 = CONCAT44(local_1b8._4_4_,0x23);
switchD_001c9f64_caseD_23:
    break;
  case 2:
switchD_001c9f1a_caseD_2:
    break;
  case 3:
switchD_001c9f1a_caseD_3:
    lVar13 = ((4L << (bVar17 & 0x3f)) << ((byte)iStack_1b0 & 0x3f)) + (2L << (bVar17 & 0x3f));
    goto LAB_001ca0a5;
  case 4:
    local_1b8 = CONCAT44(local_1b8._4_4_,0x41);
    lVar13 = ((4L << (bVar17 & 0x3f)) << ((byte)iStack_1b0 & 0x3f)) + (2L << (bVar17 & 0x3f)) +
             0x4000000;
LAB_001ca0a5:
    if (lVar13 != 0) break;
    pppppuVar11 = (undefined8 *****)0x0;
  case 5:
  case 6:
  case 7:
    goto switchD_001c9f1a_caseD_5;
  case 8:
switchD_001c9f1a_caseD_8:
    break;
  default:
    switch(uVar34) {
    case 0x23:
      goto switchD_001c9f64_caseD_23;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      break;
    case 0x28:
    case 0x29:
      goto switchD_001c9f1a_caseD_2;
    case 0x2a:
switchD_001c9f64_caseD_2a:
      goto LAB_001ca0ae;
    default:
      if (uVar34 == 0x36) {
        local_1b8 = CONCAT44(local_1b8._4_4_,0x37);
        goto LAB_001ca0ae;
      }
    }
    goto switchD_001c9f1a_caseD_5;
  }
LAB_001ca0ae:
  pppppuVar11 = (undefined8 *****)_BrotliAllocate(local_1020);
switchD_001c9f1a_caseD_5:
  local_758 = pppppuVar11;
  if (local_1008 != 0) goto LAB_001ca815;
  ppppuVar1 = (undefined8 ****)CONCAT44(uStack_1ac,iStack_1b0);
  uStack_740 = local_1b8;
  uVar32 = uStack_740;
  local_730 = local_1a8;
  uStack_740._0_4_ = (int)local_1b8;
  pppppuVar12 = local_718;
  if ((int)uStack_740 < 0x23) {
    uStack_740._4_4_ = (int)((ulong)local_1b8 >> 0x20);
    bVar17 = (byte)((ulong)local_1b8 >> 0x20);
    switch((int)uStack_740) {
    case 2:
    case 3:
    case 4:
switchD_001ca162_caseD_2:
      local_728 = &local_758;
      local_720 = pppppuVar11;
      break;
    case 5:
      local_708 = &local_758;
      local_728 = (undefined8 ****)(1L << (bVar17 & 0x3f));
      local_720 = (undefined8 ****)(1L << ((byte)iStack_1b0 & 0x3f));
      local_718 = (undefined8 *****)CONCAT44((int)local_720 + -1,0x20 - uStack_740._4_4_);
      local_6f8 = (undefined8 ****)((long)pppppuVar11 + (long)local_728 * 2);
      ppppuStack_710 = (undefined8 ****)CONCAT44(local_1a8,iStack_1b0);
      pppppuVar12 = local_718;
      local_700 = pppppuVar11;
      break;
    case 6:
      local_6f8 = &local_758;
      local_718 = (undefined8 *****)CONCAT44(local_718._4_4_,0x40 - uStack_740._4_4_);
      uStack_738._4_1_ = (char)uStack_1ac;
      ppppuStack_710 = (undefined8 ****)(0xffffffffffffffff >> (uStack_738._4_1_ * -8 & 0x3fU));
      local_728 = (undefined8 ****)(1L << (bVar17 & 0x3f));
      local_720 = (undefined8 ****)(1L << ((byte)iStack_1b0 & 0x3f));
      local_708 = (undefined8 ****)CONCAT44(iStack_1b0,(int)local_720 + -1);
      local_700 = (undefined8 *****)CONCAT44(local_700._4_4_,local_1a8);
      lStack_6e8 = (long)pppppuVar11 + (long)local_728 * 2;
      pppppuVar12 = local_718;
      local_6f0 = pppppuVar11;
      break;
    case 10:
      ppppuStack_710 = pppppuVar11 + 0x10000;
      uVar34 = -1 << ((byte)uStack_1d8 & 0x1f);
      local_728 = (undefined8 ****)(ulong)~uVar34;
      local_718 = (undefined8 *****)CONCAT44(local_718._4_4_,uVar34 + 1);
      local_720 = pppppuVar11;
      pppppuVar12 = local_718;
    }
  }
  else if ((int)uStack_740 < 0x36) {
    switch((int)uStack_740) {
    case 0x23:
switchD_001ca118_caseD_23:
      local_6b8 = &local_758;
      uStack_6c8 = CONCAT44(local_72c,local_1a8);
      lStack_6e8 = auStack_750._0_8_;
      local_6e0 = (undefined4 *)auStack_750._8_8_;
      uStack_6d8 = local_1b8;
      lStack_6b0 = CONCAT44(lStack_6b0._4_4_,1);
      local_6a8 = &local_1e0;
      local_6f0 = pppppuVar11;
      local_6d0 = ppppuVar1;
      local_6c0 = pppppuVar11;
      break;
    case 0x28:
    case 0x29:
      ppppuStack_710 = &local_758;
      local_720 = (undefined8 *****)
                  (ulong)(((int)uStack_1dc < 7) + 7 << ((char)uStack_1dc - 4U & 0x1f));
      pppppuVar12 = pppppuVar11;
      break;
    case 0x2a:
      local_318 = &local_758;
      local_328 = (ulong)(((int)uStack_1dc < 7) + 7 << ((char)uStack_1dc - 4U & 0x1f));
      local_320 = pppppuVar11;
    }
  }
  else {
    if ((int)uStack_740 == 0x36) goto switchD_001ca162_caseD_2;
    if ((int)uStack_740 == 0x37) goto switchD_001ca118_caseD_23;
    if ((int)uStack_740 == 0x41) {
      local_680 = &local_758;
      uStack_690 = CONCAT44(local_72c,local_1a8);
      lStack_6b0 = auStack_750._0_8_;
      local_6a8 = (undefined4 *)auStack_750._8_8_;
      uStack_6a0 = local_1b8;
      local_678 = 1;
      local_670 = &local_1e0;
      local_6b8 = pppppuVar11;
      local_698 = ppppuVar1;
      local_688 = pppppuVar11;
    }
  }
  local_718 = pppppuVar12;
  local_72c = 0;
  iVar19 = (int)uStack_740;
  uStack_740 = uVar32;
  uStack_738 = ppppuVar1;
LAB_001ca3be:
  ppppuVar1 = local_320;
  pppppuVar11 = local_718;
  if (iVar19 < 0x23) {
    switch(iVar19) {
    case 2:
      if (uVar37 < 0x801) {
        uVar9 = 0;
        do {
          *(undefined4 *)
           ((long)local_720 +
           ((ulong)(*(long *)((long)ppppuVar8 + uVar9) * -0x42e1ca5843000000) >> 0x30) * 4) = 0;
          uVar9 = uVar9 + 1;
        } while (uVar37 != uVar9);
      }
      else {
LAB_001ca7fa:
        ___bzero();
      }
      break;
    case 3:
      if (0x800 < uVar37) goto LAB_001ca7fa;
      uVar9 = 0;
      do {
        uVar23 = *(long *)((long)ppppuVar8 + uVar9) * -0x42e1ca5843000000;
        *(undefined4 *)((long)local_720 + (uVar23 >> 0x30) * 4) = 0;
        *(undefined4 *)((long)local_720 + (ulong)((ushort)(uVar23 >> 0x30) + 8 & 0xffff) * 4) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar37 != uVar9);
      break;
    case 4:
      if (0x1000 < uVar37) goto LAB_001ca7fa;
      uVar9 = 0;
      do {
        lVar13 = *(long *)((long)ppppuVar8 + uVar9);
        iVar19 = 0;
        do {
          *(undefined4 *)
           ((long)local_720 +
           (ulong)((uint)((ulong)(lVar13 * -0x42e1ca5843000000) >> 0x2f) + iVar19 & 0x1ffff) * 4) =
               0;
          iVar19 = iVar19 + 8;
        } while (iVar19 != 0x20);
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar37);
      break;
    case 5:
      if ((ulong)local_728 >> 6 < uVar37) goto LAB_001ca7fa;
      uVar9 = 0;
      do {
        *(undefined2 *)
         ((long)local_700 +
         (ulong)((uint)(*(int *)((long)ppppuVar8 + uVar9) * 0x1e35a7bd) >> ((byte)local_718 & 0x1f))
         * 2) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar37 != uVar9);
      break;
    case 6:
      if ((ulong)local_728 >> 6 < uVar37) goto LAB_001ca7fa;
      uVar9 = 0;
      do {
        *(undefined2 *)
         ((long)local_6f0 +
         ((*(ulong *)((long)ppppuVar8 + uVar9) & (ulong)ppppuStack_710) * 0x1fe35a7bd3579bd3 >>
          ((byte)local_718 & 0x3f) & 0xffffffff) * 2) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar37 != uVar9);
      break;
    case 10:
      lVar13 = 0;
      do {
        puVar10 = (undefined4 *)((long)local_720 + lVar13 * 4);
        *puVar10 = (undefined4)local_718;
        puVar10[1] = (undefined4)local_718;
        puVar10[2] = (undefined4)local_718;
        puVar10[3] = (undefined4)local_718;
        lVar13 = lVar13 + 4;
      } while (lVar13 != 0x20000);
    }
    goto switchD_001ca3e6_caseD_24;
  }
  if (0x35 < iVar19) {
    if (iVar19 == 0x36) {
      if (0x8000 < uVar37) goto LAB_001ca7fa;
      uVar9 = 0;
      do {
        lVar13 = *(long *)((long)ppppuVar8 + uVar9);
        iVar19 = 0;
        do {
          *(undefined4 *)
           ((long)local_720 +
           (ulong)((uint)((ulong)(lVar13 * 0x35a7bd1e35a7bd00) >> 0x2c) + iVar19 & 0xfffff) * 4) = 0
          ;
          iVar19 = iVar19 + 8;
        } while (iVar19 != 0x20);
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar37);
    }
    else if (iVar19 == 0x37) {
      _PrepareH55(&local_728,1,uVar37,ppppuVar8);
    }
    else if (iVar19 == 0x41) {
      _PrepareH65(&local_728,1,uVar37,ppppuVar8);
    }
    goto switchD_001ca3e6_caseD_24;
  }
  switch(iVar19) {
  case 0x23:
    _PrepareH35(&local_728,1,uVar37,ppppuVar8);
    break;
  case 0x28:
    if (uVar37 < 0x201) {
      uVar9 = 0;
      do {
        uVar23 = (ulong)((uint)(*(int *)((long)ppppuVar8 + uVar9) * 0x1e35a7bd) >> 0x11);
        *(undefined4 *)((long)local_718 + uVar23 * 4) = 0xcccccccc;
        *(undefined2 *)((long)local_718 + uVar23 * 2 + 0x20000) = 0xcccc;
        uVar9 = uVar9 + 1;
      } while (uVar37 != uVar9);
    }
    else {
LAB_001ca6ae:
      pppppuVar12 = local_718 + 0x4000;
      _memset(local_718,0xcc,0x20000);
      ___bzero(pppppuVar12,0x10000);
    }
    goto LAB_001ca6da;
  case 0x29:
    if (0x200 < uVar37) goto LAB_001ca6ae;
    uVar9 = 0;
    do {
      uVar23 = (ulong)((uint)(*(int *)((long)ppppuVar8 + uVar9) * 0x1e35a7bd) >> 0x11);
      *(undefined4 *)((long)local_718 + uVar23 * 4) = 0xcccccccc;
      *(undefined2 *)((long)local_718 + uVar23 * 2 + 0x20000) = 0xcccc;
      uVar9 = uVar9 + 1;
    } while (uVar37 != uVar9);
LAB_001ca6da:
    ___bzero(pppppuVar11 + 0x6000);
    local_728 = (undefined8 ****)((ulong)local_728 & 0xffffffffffff0000);
    break;
  case 0x2a:
    if (uVar37 < 0x201) {
      uVar9 = 0;
      do {
        uVar23 = (ulong)((uint)(*(int *)((long)local_60 + uVar9) * 0x1e35a7bd) >> 0x11);
        *(undefined4 *)((long)local_320 + uVar23 * 4) = 0xcccccccc;
        *(undefined2 *)((long)local_320 + uVar23 * 2 + 0x20000) = 0xcccc;
        uVar9 = uVar9 + 1;
      } while (uVar37 != uVar9);
    }
    else {
      pppppuVar11 = (undefined8 *****)(local_320 + 0x4000);
      _memset(local_320,0xcc,0x20000);
      ___bzero(pppppuVar11,0x10000);
    }
    ___bzero(ppppuVar1 + 0x6000,0x10000);
    ___bzero(&local_728);
  }
switchD_001ca3e6_caseD_24:
  auStack_750 = (undefined1  [16])0x0;
  local_72c = 1;
LAB_001ca815:
  if (local_1008 == 0) {
    if ((int)uStack_740 == 0x41) {
      pppppuVar11 = (undefined8 *****)&local_6d0;
      if (0x1f < uVar37) {
        lVar13 = 0;
        iVar19 = 0;
        do {
          iVar19 = iVar19 * uStack_6c8._4_4_ + (uint)*(byte *)((long)local_60 + lVar13) + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x20);
        local_6e0 = (undefined4 *)CONCAT44(local_6e0._4_4_,iVar19);
      }
LAB_001ca901:
      *pppppuVar11 = (undefined8 ****)0x0;
    }
    else {
      pppppuVar11 = &local_708;
      if ((int)uStack_740 == 0x37) {
        if (0x1f < uVar37) {
          iVar19 = 0;
          uVar37 = 0xfffffffffffffffc;
          do {
            iVar19 = iVar19 * local_700._4_4_ + (uint)*(byte *)((long)local_60 + uVar37 + 4) + 1;
            uVar37 = uVar37 + 4;
          } while (uVar37 < 0x1c);
LAB_001ca8bb:
          local_718 = (undefined8 *****)CONCAT44(local_718._4_4_,iVar19);
        }
        goto LAB_001ca901;
      }
      if ((int)uStack_740 == 0x23) {
        if (0x1f < uVar37) {
          iVar19 = 0;
          uVar37 = 0xfffffffffffffffc;
          do {
            iVar19 = iVar19 * local_700._4_4_ + (uint)*(byte *)((long)local_60 + uVar37 + 4) + 1;
            uVar37 = uVar37 + 4;
          } while (uVar37 < 0x1c);
          goto LAB_001ca8bb;
        }
        goto LAB_001ca901;
      }
    }
    local_1e8 = (undefined2 *)(local_138 >> 3);
    local_128 = param_7;
    local_a8 = 0;
    uVar37 = 0;
    local_118 = 0;
    local_120 = 0;
    pppppuVar11 = (undefined8 *****)local_60;
    local_a0 = uVar29;
    do {
      local_200 = uVar37 + local_138;
      if (local_70 < uVar37 + local_138) {
        local_200 = local_70;
      }
      uVar29 = local_200 - uVar37;
      local_150 = 0;
      local_f0 = (undefined2 *)0x0;
      if (((int)uStack_1dc < 10) ||
         (iVar19 = _BrotliIsMostlyUTF8(0x3fe8000000000000,pppppuVar11,uVar37,0x7fffffffffffffff),
         iVar19 != 0)) {
        local_130 = 2;
      }
      else {
        local_130 = 3;
      }
      local_1f0 = uVar29 / 0xc + 0x10;
      local_1f8 = PTR___kBrotliContextLookupTable_00441030 + (uint)((int)local_130 << 9);
      local_b0 = (undefined2 *)0x0;
      lVar13 = 0;
      local_100 = 0;
      local_80 = (void *)0x0;
      local_c0 = uVar37;
      do {
        uVar29 = local_200 - uVar37;
        puVar15 = local_b0;
        if (local_200 < uVar37 || uVar29 == 0) break;
        local_d8 = uVar29;
        if (local_208 <= uVar29) {
          local_d8 = local_208;
        }
        lVar30 = local_d8 + 1;
        local_108 = lVar13;
        local_e0 = uVar37;
        if (lVar30 == 0) {
          local_d0 = 0;
        }
        else {
          local_d0 = _BrotliAllocate(local_1020,lVar30 * 0x10);
        }
        param_6 = local_90;
        if (local_1008 != 0) goto LAB_001cb4ed;
        _BrotliInitZopfliNodes(local_d0,lVar30);
        if ((0x7f < local_e0) && (2 < local_d8)) {
          uVar29 = local_e0 - 0x7f;
          uVar37 = (local_d8 + local_e0) - 0x7f;
          if (local_e0 < uVar37) {
            uVar37 = local_e0;
          }
          local_218 = uVar37;
          if (uVar29 < uVar37) {
            local_210 = local_720;
            local_140 = ppppuStack_710;
            do {
              uVar9 = local_e0 - uVar29;
              if (uVar9 < 0x10) {
                uVar9 = 0xf;
              }
              uVar23 = (ulong)((uint)(*(int *)((long)local_60 + (uVar29 & 0x7fffffffffffffff)) *
                                     0x1e35a7bd) >> 0xf);
              uVar28 = (ulong)*(uint *)((long)local_720 + uVar23 * 4);
              local_110 = (uVar29 & (ulong)local_728) * 2 + 1;
              local_e8 = (uVar29 & (ulong)local_728) * 2;
              *(int *)((long)local_720 + uVar23 * 4) = (int)uVar29;
              if (uVar29 != uVar28) {
                uVar9 = (long)local_728 - uVar9;
                lVar30 = (uVar29 & 0x7fffffffffffffff) + (long)local_60;
                lVar13 = (uVar29 & 0x7fffffffffffffff) + (long)local_60;
                lVar35 = 0x40;
                local_98 = 0;
                uVar23 = 0;
LAB_001cabd9:
                uVar18 = (undefined4)uVar28;
                bVar39 = lVar35 != 0;
                lVar35 = lVar35 + -1;
                local_228 = uVar9;
                local_220 = lVar30;
                local_148 = lVar13;
                if ((uVar29 - uVar28 <= uVar9) && (bVar39)) {
                  uVar22 = uVar23;
                  if (local_98 < uVar23) {
                    uVar22 = local_98;
                  }
                  local_b8 = (long)local_60 + uVar28;
                  pcVar31 = (char *)(local_b8 + uVar22);
                  uVar20 = 0x80 - uVar22;
                  if (7 < uVar20) {
                    local_68 = (undefined2 *)CONCAT44(local_68._4_4_,uVar18);
                    uVar38 = uVar20 & 0xfffffffffffffff8;
                    lVar27 = 0;
                    uVar26 = 0;
LAB_001cac5c:
                    uVar25 = *(ulong *)(lVar13 + uVar22 + uVar26 * 8);
                    if (*(ulong *)(pcVar31 + uVar26 * 8) == uVar25) goto code_r0x001cac6a;
                    uVar25 = uVar25 ^ *(ulong *)(pcVar31 + uVar26 * 8);
                    uVar20 = 0;
                    if (uVar25 != 0) {
                      for (; (uVar25 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
                      }
                    }
                    uVar26 = (uVar20 >> 3 & 0x1fffffff) - lVar27;
                    goto LAB_001cacac;
                  }
                  uVar38 = 0;
                  goto LAB_001cad2f;
                }
              }
LAB_001cab57:
              *(undefined4 *)((long)ppppuStack_710 + local_e8 * 4) = (undefined4)local_718;
              uVar18 = (undefined4)local_718;
LAB_001cab68:
              *(undefined4 *)((long)ppppuStack_710 + local_110 * 4) = uVar18;
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar37);
          }
        }
        lVar13 = _BrotliZopfliComputeShortestPath
                           (local_1020,local_d8,local_e0,local_60,0x7fffffffffffffff,local_1f8,
                            &local_1e0,&local_48,&local_758,local_d0);
        param_6 = local_90;
        if (local_1008 != 0) goto LAB_001cb4ed;
        uVar29 = (long)local_b0 + lVar13 + 1;
        if (uVar29 < local_1f0) {
          uVar29 = local_1f0;
        }
        pvVar14 = local_80;
        uVar37 = local_100;
        if (local_100 != uVar29) {
          pvVar14 = (void *)_BrotliAllocate(local_1020,uVar29 << 4);
          pvVar7 = local_80;
          param_6 = local_90;
          if (local_1008 != 0) goto LAB_001cb4ed;
          uVar37 = uVar29;
          if (local_80 != (void *)0x0) {
            _memcpy(pvVar14,local_80,(long)local_b0 << 4);
            _BrotliFree(local_1020,pvVar7);
          }
        }
        local_100 = uVar37;
        uVar32 = local_d0;
        uVar29 = local_d8;
        uVar37 = local_e0;
        local_68 = (undefined2 *)(lVar13 + (long)local_b0);
        local_80 = pvVar14;
        _BrotliZopfliCreateCommands
                  (local_d8,local_e0,local_d0,&local_48,&local_150,&local_1e0,
                   (void *)((long)local_b0 * 0x10 + (long)pvVar14),&local_f0);
        puVar15 = local_68;
        lVar13 = local_108 + uVar29;
        _BrotliFree(local_1020,uVar32);
        if (local_1e8 < puVar15) break;
        uVar37 = uVar37 + uVar29;
        local_b0 = puVar15;
      } while (local_f0 <= local_1e8);
      uVar29 = local_c0;
      local_68 = puVar15;
      if (local_150 != 0) {
        lVar30 = (long)puVar15 * 0x10;
        *(int *)((long)local_80 + lVar30) = (int)local_150;
        *(undefined8 *)((long)local_80 + lVar30 + 4) = 0x8000000;
        *(undefined2 *)((long)local_80 + lVar30 + 0xe) = 0x10;
        if (local_150 < 6) {
          uVar37 = local_150 & 0xffffffff;
        }
        else if (local_150 < 0x82) {
          uVar34 = 0x1f;
          uVar21 = (uint)(local_150 - 2);
          if (uVar21 != 0) {
            for (; uVar21 >> uVar34 == 0; uVar34 = uVar34 - 1) {
            }
          }
          uVar37 = (ulong)((int)(local_150 - 2 >> ((char)(uVar34 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                           (uVar34 ^ 0xffffffe0) * 2 + 0x40);
        }
        else if (local_150 < 0x842) {
          uVar21 = (int)local_150 - 0x42;
          uVar34 = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> uVar34 == 0; uVar34 = uVar34 - 1) {
            }
          }
          uVar37 = (ulong)((uVar34 ^ 0xffe0) + 0x2a);
        }
        else {
          uVar37 = 0x15;
          if (0x1841 < local_150) {
            uVar37 = (ulong)(ushort)(0x17 - (local_150 < 0x5842));
          }
        }
        iVar19 = (int)((uVar37 & 0xffff) >> 3) * 3;
        *(ushort *)((long)local_80 + lVar30 + 0xc) =
             ((ushort)(0x520d40 >> ((char)iVar19 * '\x02' & 0x1fU)) & 0xc0) + (short)iVar19 * 0x40 +
             ((ushort)uVar37 & 7) * 8 + 0x42;
        local_f0 = (undefined2 *)((long)local_f0 + local_150);
        local_68 = (undefined2 *)((long)puVar15 + 1);
      }
      puVar15 = local_68;
      uVar37 = lVar13 + local_c0;
      local_88 = local_78;
      if (lVar13 == 0) {
        puVar15 = (undefined2 *)_BrotliAllocate(local_1020,0x10,0);
        param_6 = local_90;
        if (local_1008 != 0) goto LAB_001cb4ed;
        *puVar15 = (short)local_a0;
        pppppuVar12 = (undefined8 *****)(ulong)*(byte *)((long)puVar15 + (local_88 >> 3));
        *(ulong *)((long)puVar15 + (local_88 >> 3)) =
             3L << ((byte)local_88 & 7) | (ulong)pppppuVar12;
        local_88 = (ulong)((int)local_88 + 9U & 0xfffffff8);
        pppppuVar11 = (undefined8 *****)local_60;
      }
      else {
        local_b8 = (ulong)(uVar37 == local_70);
        local_98 = uVar37;
        iVar19 = _ShouldCompress(local_60,0x7fffffffffffffff,local_c0,lVar13,local_f0,local_68);
        if (iVar19 == 0) {
          local_48 = local_58;
          uStack_40 = uStack_50;
          if (lVar13 == -0x10) {
            puVar15 = (undefined2 *)0x0;
          }
          else {
            puVar15 = (undefined2 *)_BrotliAllocate(local_1020);
          }
          pppppuVar11 = (undefined8 *****)local_60;
          uVar37 = local_98;
          param_6 = local_90;
          if (local_1008 != 0) goto LAB_001cb4ed;
          *puVar15 = (short)local_a0;
          pppppuVar12 = (undefined8 *****)local_60;
          _BrotliStoreUncompressedMetaBlock
                    (local_b8,local_60,local_c0,0x7fffffffffffffff,lVar13,&local_88,puVar15);
        }
        else {
          _memcpy(local_7e8,&local_1e0,0x90);
          _BrotliInitBlockSplit(local_310);
          local_108 = lVar13;
          _BrotliInitBlockSplit(local_2e0);
          _BrotliInitBlockSplit(local_2b0);
          lVar13 = local_108;
          uVar37 = local_118;
          local_240 = (undefined1  [16])0x0;
          local_250 = (undefined1  [16])0x0;
          local_260 = (undefined1  [16])0x0;
          local_270 = (undefined1  [16])0x0;
          local_280 = (undefined1  [16])0x0;
          uVar9 = local_120 & 0xff;
          _BrotliBuildMetaBlock
                    (local_1020,local_60,uVar29,0x7fffffffffffffff,local_7e8,local_118 & 0xff,uVar9,
                     local_80,puVar15,local_130,local_310);
          param_6 = local_90;
          if (local_1008 != 0) goto LAB_001cb4ed;
          _BrotliOptimizeHistograms(local_79c,local_310);
          puVar15 = (undefined2 *)_BrotliAllocate(local_1020,lVar13 * 2 + 0x1f7);
          param_6 = local_90;
          if (local_1008 != 0) goto LAB_001cb4ed;
          *puVar15 = (short)local_a0;
          _BrotliStoreMetaBlock
                    (local_1020,local_60,local_c0,lVar13,0x7fffffffffffffff,uVar37 & 0xff,uVar9,
                     local_b8,local_7e8,local_130,local_80,local_68,local_310,&local_88,puVar15);
          pppppuVar11 = (undefined8 *****)local_60;
          param_6 = local_90;
          if (local_1008 != 0) goto LAB_001cb4ed;
          if (lVar13 + 4U < local_88 >> 3) {
            local_48 = local_58;
            uStack_40 = uStack_50;
            *(char *)puVar15 = (char)local_a0;
            *(char *)((long)puVar15 + 1) = (char)(local_a0 >> 8);
            local_88 = local_78;
            _BrotliStoreUncompressedMetaBlock
                      (local_b8,local_60,local_c0,0x7fffffffffffffff,lVar13,&local_88,puVar15);
          }
          _BrotliDestroyBlockSplit(local_1020,local_310);
          _BrotliDestroyBlockSplit(local_1020,local_2e0);
          _BrotliDestroyBlockSplit(local_1020,local_2b0);
          _BrotliFree(local_1020,local_280._0_8_);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_280._8_8_;
          local_280 = auVar2 << 0x40;
          _BrotliFree(local_1020,local_270._0_8_);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = local_270._8_8_;
          local_270 = auVar3 << 0x40;
          _BrotliFree(local_1020,local_260._0_8_);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_260._8_8_;
          local_260 = auVar4 << 0x40;
          _BrotliFree(local_1020,local_250._0_8_);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_250._8_8_;
          local_250 = auVar5 << 0x40;
          pppppuVar12 = (undefined8 *****)local_240._0_8_;
          _BrotliFree(local_1020,local_240._0_8_);
          uVar37 = local_98;
        }
      }
      puVar6 = local_128;
      uVar29 = local_88 >> 3;
      local_a0 = (ulong)*(byte *)((long)puVar15 + uVar29);
      if (uVar37 < local_70) {
        uVar24 = (undefined7)((ulong)pppppuVar12 >> 8);
        local_120 = CONCAT71(uVar24,*(undefined1 *)((long)pppppuVar11 + (uVar37 - 2)));
        local_118 = CONCAT71(uVar24,*(undefined1 *)((long)pppppuVar11 + (uVar37 - 1)));
      }
      local_58 = local_48;
      uStack_50 = uStack_40;
      local_a8 = local_a8 + uVar29;
      local_78 = local_88;
      if (local_a8 <= local_c8) {
        local_68 = puVar15;
        _memcpy(local_128,puVar15,uVar29);
        local_128 = (undefined2 *)((long)puVar6 + uVar29);
        puVar15 = local_68;
      }
      _BrotliFree(local_1020,puVar15);
      _BrotliFree(local_1020,local_80);
      param_6 = local_90;
    } while ((uVar37 < local_70) && (local_78 = (ulong)((uint)local_78 & 7), local_a8 <= local_c8));
    *local_90 = local_a8;
    if ((undefined8 *****)local_758 != (undefined8 *****)0x0) {
      _BrotliFree(local_1020);
    }
    if ((local_a8 <= local_c8) && ((uVar32 = 1, local_f8 == 0 || (*param_6 <= local_f8))))
    goto LAB_001cb5f9;
  }
  else {
LAB_001cb4ed:
    _BrotliWipeOutMemoryManager(local_1020);
  }
LAB_001cb4f9:
  *param_6 = 0;
  uVar32 = 0;
  if (local_f8 - 1 < local_c8) {
    *param_7 = 0x321;
    lVar13 = 2;
    lVar30 = 0;
    uVar29 = local_70;
    local_90 = param_6;
    do {
      sVar36 = 0x1000000;
      if (uVar29 < 0x1000000) {
        sVar36 = uVar29;
      }
      iVar19 = 2 - (uint)(uVar29 < 0x100001);
      if (uVar29 < 0x10001) {
        iVar19 = 0;
      }
      uVar21 = ((int)sVar36 * 8 + iVar19 * 2) - 8;
      uVar34 = 0x80000 << ((byte)(iVar19 << 2) & 0x1f) | uVar21;
      *(char *)((long)param_7 + lVar13) = (char)uVar21;
      *(char *)((long)param_7 + lVar13 + 1) = (char)((uint)((int)sVar36 * 8 + -8) >> 8);
      *(char *)((long)param_7 + lVar13 + 2) = (char)(uVar34 >> 0x10);
      if (uVar29 < 0x100001) {
        lVar13 = lVar13 + 3;
      }
      else {
        *(char *)((long)param_7 + lVar13 + 3) = (char)(uVar34 >> 0x18);
        lVar13 = lVar13 + 4;
      }
      _memcpy((undefined1 *)((long)param_7 + lVar13),(void *)((long)local_60 + lVar30),sVar36);
      lVar13 = lVar13 + sVar36;
      lVar30 = lVar30 + sVar36;
      uVar29 = uVar29 - sVar36;
    } while (uVar29 != 0);
    *(undefined1 *)((long)param_7 + lVar13) = 3;
    *local_90 = lVar13 + 1;
LAB_001cb5f3:
    uVar32 = 1;
  }
LAB_001cb5f9:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar32;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x001cac6a:
  uVar26 = uVar26 + 1;
  lVar27 = lVar27 + -8;
  if (uVar20 >> 3 == uVar26) goto code_r0x001cac76;
  goto LAB_001cac5c;
code_r0x001cac76:
  pcVar31 = pcVar31 + -lVar27;
LAB_001cad2f:
  uVar20 = uVar20 & 7;
  uVar26 = uVar38;
  if (uVar20 != 0) {
    uVar25 = uVar38 | uVar20;
    do {
      uVar26 = uVar38;
      if (*(char *)(lVar13 + uVar22 + uVar38) != *pcVar31) break;
      pcVar31 = pcVar31 + 1;
      uVar38 = uVar38 + 1;
      uVar20 = uVar20 - 1;
      uVar26 = uVar25;
    } while (uVar20 != 0);
  }
LAB_001cacac:
  uVar26 = uVar26 + uVar22;
  local_230 = uVar23;
  if (0x7f < uVar26) {
    *(undefined4 *)((long)ppppuStack_710 + local_e8 * 4) =
         *(undefined4 *)(ppppuStack_710 + (uVar28 & (ulong)local_728));
    uVar18 = *(undefined4 *)((long)ppppuStack_710 + (uVar28 & (ulong)local_728) * 8 + 4);
    goto LAB_001cab68;
  }
  uVar28 = (uVar28 & (ulong)local_728) * 2;
  if (*(byte *)(local_b8 + uVar26) < *(byte *)(lVar30 + uVar26)) {
    *(undefined4 *)((long)ppppuStack_710 + local_e8 * 4) = uVar18;
    uVar28 = uVar28 | 1;
    local_e8 = uVar28;
    local_98 = uVar26;
  }
  else {
    *(undefined4 *)((long)ppppuStack_710 + local_110 * 4) = uVar18;
    uVar23 = uVar26;
    local_110 = uVar28;
  }
  uVar28 = (ulong)*(uint *)((long)ppppuStack_710 + uVar28 * 4);
  if (uVar29 == uVar28) goto LAB_001cab57;
  goto LAB_001cabd9;
}

