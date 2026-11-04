// rea decompile_all
// name: _EncodeData
// address: 0x1cc82f
// body: available
// range: 0x1cc82f-0x1ce773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _EncodeData(long param_1,int param_2,int param_3,ulong *param_4,undefined8 *param_5)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  void *pvVar17;
  char cVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  char *pcVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined *puVar42;
  long lVar43;
  bool bVar44;
  bool bVar45;
  undefined8 local_c8;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined1 (*local_a0) [16];
  ulong local_98;
  int local_90;
  undefined4 local_8c;
  ulong local_88;
  ulong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  ulong *local_60;
  ulong local_58;
  int local_50;
  int local_4c;
  long local_48;
  undefined8 *local_40;
  ulong local_38;
  
  uVar16 = *(ulong *)(param_1 + 0x8c8);
  uVar39 = *(ulong *)(param_1 + 0x928);
  uVar28 = uVar16 - uVar39;
  iVar13 = (int)uVar28;
  if (uVar39 >> 0x1e < 3) {
    uVar26 = uVar39 & 0xffffffff;
  }
  else {
    uVar26 = (ulong)(((int)((uint)uVar39 * 2) >> 1 & 0xc0000000U) + ((uint)uVar39 & 0x3fffffff) +
                    0x80000000);
  }
  local_8c = (undefined4)uVar26;
  if (*(int *)(param_1 + 0x21b8) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x21b8) = 1;
  }
  if ((ulong)(1L << (*(byte *)(param_1 + 0xc) & 0x3f)) < uVar28) {
    return 0;
  }
  local_38 = (ulong)*(uint *)(param_1 + 0x8d4);
  lVar32 = param_1 + 0x90;
  local_48 = *(long *)(param_1 + 0x8f0);
  uVar23 = *(uint *)(param_1 + 4);
  local_90 = iVar13;
  local_80 = param_4;
  local_68 = lVar32;
  if (uVar23 == 1) {
    if (*(long *)(param_1 + 0x2178) != 0) goto LAB_001cc982;
    local_60 = (ulong *)CONCAT44(local_60._4_4_,local_8c);
    local_78 = param_5;
    local_50 = param_2;
    local_4c = param_3;
    uVar14 = _BrotliAllocate(lVar32,0x80000);
    *(undefined8 *)(param_1 + 0x2178) = uVar14;
    uVar14 = _BrotliAllocate(lVar32,0x20000);
    *(undefined8 *)(param_1 + 0x2180) = uVar14;
    if (*(int *)(param_1 + 0xa8) != 0) {
      return 0;
    }
    uVar23 = *(uint *)(param_1 + 4);
    uVar26 = (ulong)local_60 & 0xffffffff;
    param_5 = local_78;
    param_3 = local_4c;
    param_2 = local_50;
  }
  if (uVar23 < 2) {
LAB_001cc982:
    local_88 = (ulong)*(byte *)(param_1 + 0x982);
    uVar41 = 0;
    if (param_2 != 0 || uVar16 != uVar39) {
      local_78 = param_5;
      local_50 = param_2;
      puVar15 = (undefined1 *)_GetBrotliStorage(param_1,iVar13 * 2 + 0x1f7);
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0;
      }
      *puVar15 = *(undefined1 *)(param_1 + 0x980);
      puVar15[1] = *(undefined1 *)(param_1 + 0x981);
      uVar28 = uVar28 & 0xffffffff;
      uVar14 = _GetHashTable(param_1,*(undefined4 *)(param_1 + 4),uVar28,&local_c8);
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0;
      }
      lVar32 = local_48 + (ulong)((uint)local_38 & (uint)uVar26);
      if (*(int *)(param_1 + 4) == 0) {
        local_38 = param_1 + 0x1df0;
        _BrotliCompressFragmentFast
                  (local_68,lVar32,uVar28,local_50,uVar14,local_c8,local_38,param_1 + 0x1e70,
                   param_1 + 0x2170,param_1 + 0x1f70,&local_88,puVar15);
      }
      else {
        _BrotliCompressFragmentTwoPass
                  (local_68,lVar32,uVar28,local_50,*(undefined8 *)(param_1 + 0x2178),
                   *(undefined8 *)(param_1 + 0x2180),uVar14,local_c8,&local_88,puVar15);
      }
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0;
      }
      uVar41 = local_88 >> 3;
      *(ushort *)(param_1 + 0x980) = (ushort)(byte)puVar15[uVar41];
      *(byte *)(param_1 + 0x982) = (byte)local_88 & 7;
      _UpdateLastProcessedPos(param_1);
      *local_78 = puVar15;
    }
    *local_80 = uVar41;
    return 1;
  }
  uVar16 = *(long *)(param_1 + 0x908) + (uVar28 >> 1 & 0x7fffffff) + 1;
  local_50 = param_2;
  if (*(ulong *)(param_1 + 0x8f8) < uVar16) {
    local_60 = (ulong *)CONCAT44(local_60._4_4_,(int)uVar26);
    lVar33 = (uVar28 >> 2 & 0x3fffffff) + uVar16 + 0x10;
    *(long *)(param_1 + 0x8f8) = lVar33;
    local_78 = param_5;
    if (lVar33 == 0) {
      pvVar17 = (void *)0x0;
    }
    else {
      pvVar17 = (void *)_BrotliAllocate(lVar32,lVar33 * 0x10);
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      return 0;
    }
    if (*(void **)(param_1 + 0x900) != (void *)0x0) {
      _memcpy(pvVar17,*(void **)(param_1 + 0x900),*(long *)(param_1 + 0x908) << 4);
      _BrotliFree(local_68,*(undefined8 *)(param_1 + 0x900));
    }
    *(void **)(param_1 + 0x900) = pvVar17;
    uVar26 = (ulong)local_60 & 0xffffffff;
    param_5 = local_78;
  }
  bVar44 = local_50 != 0;
  local_70 = (undefined8 *)(param_1 + 0x998);
  local_40 = (undefined8 *)(uVar28 & 0xffffffff);
  bVar45 = (int)uVar26 == 0;
  bVar27 = bVar45 && bVar44;
  if (*(long *)(param_1 + 0x998) != 0) {
    if (*(int *)(param_1 + 0x9c4) == 0) goto LAB_001cd100;
    goto LAB_001cd39e;
  }
  local_60 = (ulong *)CONCAT44(local_60._4_4_,(int)uVar26);
  puVar1 = (uint *)(param_1 + 0x28);
  uVar23 = *(uint *)(param_1 + 4);
  if ((int)uVar23 < 10) {
    uVar20 = uVar23;
    if (uVar23 == 4) {
      if (0xfffff < *(ulong *)(param_1 + 0x18)) {
        *puVar1 = 0x36;
        uVar20 = 0x36;
        goto LAB_001ccbb0;
      }
    }
    else if (4 < (int)uVar23) {
      if (0x10 < (int)*(uint *)(param_1 + 8)) {
        if ((*(uint *)(param_1 + 8) < 0x13) || (*(ulong *)(param_1 + 0x18) < 0x100000)) {
          uVar19 = 0x10;
          if (uVar23 < 9) {
            uVar19 = 10;
          }
          *(undefined4 *)(param_1 + 0x28) = 5;
          *(uint *)(param_1 + 0x30) = uVar23 - 1;
          *(uint *)(param_1 + 0x2c) = 0xf - (uint)(uVar23 < 7);
          uVar12 = 4;
          if (6 < uVar23) {
            uVar12 = uVar19;
          }
          *(undefined4 *)(param_1 + 0x38) = uVar12;
          uVar20 = 5;
        }
        else {
          *(undefined8 *)(param_1 + 0x28) = 0xf00000006;
          *(uint *)(param_1 + 0x30) = uVar23 - 1;
          *(undefined4 *)(param_1 + 0x34) = 5;
          uVar19 = 0x10;
          if (uVar23 < 9) {
            uVar19 = 10;
          }
          uVar12 = 4;
          if (6 < uVar23) {
            uVar12 = uVar19;
          }
          *(undefined4 *)(param_1 + 0x38) = uVar12;
          uVar20 = 6;
        }
        goto LAB_001ccbb0;
      }
      uVar20 = 0x28;
      if (6 < uVar23) {
        uVar20 = 0x2a - (uVar23 < 9);
      }
    }
    *puVar1 = uVar20;
  }
  else {
    *puVar1 = 10;
    uVar20 = 10;
  }
LAB_001ccbb0:
  uVar39 = 0;
  uVar16 = 0;
  if (*(int *)(param_1 + 8) < 0x19) {
    switch(uVar20 - 2) {
    case 0:
    case 1:
      goto switchD_001ccbd2_caseD_0;
    case 2:
      goto switchD_001ccbd2_caseD_2;
    case 3:
    case 4:
      goto switchD_001ccbd2_caseD_3;
    case 5:
    case 6:
    case 7:
      break;
    case 8:
      goto switchD_001ccbd2_caseD_8;
    default:
      switch(uVar20) {
      case 0x23:
        goto switchD_001ccc1a_caseD_23;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        break;
      case 0x28:
      case 0x29:
        goto switchD_001ccbd2_caseD_2;
      case 0x2a:
        goto switchD_001ccc1a_caseD_2a;
      default:
        if (uVar20 == 0x36) goto LAB_001ccdfd;
      }
    }
    goto switchD_001ccbd2_caseD_5;
  }
  uVar16 = uVar39;
  switch(uVar20 - 2) {
  case 0:
switchD_001ccbd2_caseD_0:
    break;
  case 1:
    *puVar1 = 0x23;
switchD_001ccc1a_caseD_23:
    break;
  case 2:
switchD_001ccbd2_caseD_2:
    break;
  case 3:
switchD_001ccbd2_caseD_3:
    lVar32 = ((4L << (*(byte *)(param_1 + 0x2c) & 0x3f)) << (*(byte *)(param_1 + 0x30) & 0x3f)) +
             (2L << (*(byte *)(param_1 + 0x2c) & 0x3f));
    goto LAB_001ccdf0;
  case 4:
    *(undefined4 *)(param_1 + 0x28) = 0x41;
    lVar32 = ((4L << (*(byte *)(param_1 + 0x2c) & 0x3f)) << (*(byte *)(param_1 + 0x30) & 0x3f)) +
             (2L << (*(byte *)(param_1 + 0x2c) & 0x3f)) + 0x4000000;
    goto LAB_001ccdf0;
  case 5:
  case 6:
  case 7:
    goto switchD_001ccbd2_caseD_5;
  case 8:
switchD_001ccbd2_caseD_8:
    uVar39 = 1L << ((byte)*(int *)(param_1 + 8) & 0x3f);
    uVar16 = (ulong)local_40;
    if (uVar39 < local_40) {
      uVar16 = uVar39;
    }
    if (!bVar45 || !bVar44) {
      uVar16 = uVar39;
    }
    lVar32 = uVar16 * 8 + 0x80000;
LAB_001ccdf0:
    if (lVar32 != 0) break;
    uVar16 = 0;
    goto switchD_001ccbd2_caseD_5;
  default:
    switch(uVar20) {
    case 0x23:
      goto switchD_001ccc1a_caseD_23;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      break;
    case 0x28:
    case 0x29:
      goto switchD_001ccbd2_caseD_2;
    case 0x2a:
switchD_001ccc1a_caseD_2a:
      goto LAB_001ccdfd;
    default:
      if (uVar20 == 0x36) {
        *puVar1 = 0x37;
        goto LAB_001ccdfd;
      }
    }
    goto switchD_001ccbd2_caseD_5;
  }
LAB_001ccdfd:
  local_4c = param_3;
  uVar16 = _BrotliAllocate(local_68);
  param_3 = local_4c;
switchD_001ccbd2_caseD_5:
  *(ulong *)(param_1 + 0x998) = uVar16;
  uVar26 = (ulong)local_60 & 0xffffffff;
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)puVar1;
    *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_1 + 0x38);
    iVar13 = *(int *)(param_1 + 0x9b0);
    if (iVar13 < 0x23) {
      if (iVar13 - 2U < 9) {
        uVar26 = (ulong)local_60 & 0xffffffff;
        switch(iVar13) {
        default:
          goto switchD_001cced9_caseD_2;
        case 5:
          *(undefined8 **)(param_1 + 0x9e8) = local_70;
          lVar33 = 1L << ((byte)*(int *)(param_1 + 0x9b4) & 0x3f);
          *(int *)(param_1 + 0x9d8) = 0x20 - *(int *)(param_1 + 0x9b4);
          *(long *)(param_1 + 0x9c8) = lVar33;
          lVar32 = 1L << ((byte)*(undefined4 *)(param_1 + 0x9b8) & 0x3f);
          *(long *)(param_1 + 0x9d0) = lVar32;
          *(int *)(param_1 + 0x9dc) = (int)lVar32 + -1;
          *(ulong *)(param_1 + 0x9f0) = uVar16;
          *(ulong *)(param_1 + 0x9f8) = uVar16 + lVar33 * 2;
          *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(param_1 + 0x9b8);
          uVar26 = (ulong)local_60 & 0xffffffff;
          *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_1 + 0x9c0);
          break;
        case 6:
          _InitializeH6(local_70);
          uVar26 = (ulong)local_60 & 0xffffffff;
          break;
        case 7:
        case 8:
        case 9:
          break;
        case 10:
          *(ulong *)(param_1 + 0x9d0) = uVar16;
          *(ulong *)(param_1 + 0x9e0) = uVar16 + 0x80000;
          uVar23 = -1 << (*(byte *)(param_1 + 8) & 0x1f);
          *(ulong *)(param_1 + 0x9c8) = (ulong)~uVar23;
          *(uint *)(param_1 + 0x9d8) = uVar23 + 1;
        }
      }
    }
    else if (iVar13 < 0x36) {
      if (iVar13 - 0x23U < 8) {
        uVar26 = (ulong)local_60 & 0xffffffff;
        switch(iVar13) {
        case 0x23:
switchD_001cce8f_caseD_23:
          uVar26 = (ulong)local_60 & 0xffffffff;
          *(undefined8 **)(param_1 + 0xa38) = local_70;
          *(ulong *)(param_1 + 0xa30) = uVar16;
          uVar14 = local_70[1];
          uVar8 = local_70[2];
          uVar9 = local_70[3];
          uVar10 = local_70[4];
          uVar11 = local_70[5];
          *(undefined8 *)(param_1 + 0xa00) = *local_70;
          *(undefined8 *)(param_1 + 0xa08) = uVar14;
          *(undefined8 *)(param_1 + 0xa10) = uVar8;
          *(undefined8 *)(param_1 + 0xa18) = uVar9;
          *(undefined8 *)(param_1 + 0xa20) = uVar10;
          *(undefined8 *)(param_1 + 0xa28) = uVar11;
          *(undefined4 *)(param_1 + 0xa40) = 1;
          *(long *)(param_1 + 0xa48) = param_1;
          break;
        case 0x28:
        case 0x29:
          *(undefined8 **)(param_1 + 0x9e0) = local_70;
          *(ulong *)(param_1 + 0x9d8) = uVar16;
          uVar16 = (ulong)((*(int *)(param_1 + 4) < 7) + 7 <<
                          ((char)*(int *)(param_1 + 4) - 4U & 0x1f));
          goto LAB_001ccfcd;
        case 0x2a:
          *(undefined8 **)(param_1 + 0xdd8) = local_70;
          *(ulong *)(param_1 + 0xdd0) = uVar16;
          *(ulong *)(param_1 + 0xdc8) =
               (ulong)((*(int *)(param_1 + 4) < 7) + 7 << ((char)*(int *)(param_1 + 4) - 4U & 0x1f))
          ;
        }
      }
    }
    else if (iVar13 == 0x36) {
switchD_001cced9_caseD_2:
      *(undefined8 **)(param_1 + 0x9c8) = local_70;
LAB_001ccfcd:
      uVar26 = (ulong)local_60 & 0xffffffff;
      *(ulong *)(param_1 + 0x9d0) = uVar16;
    }
    else {
      if (iVar13 == 0x37) goto switchD_001cce8f_caseD_23;
      if (iVar13 == 0x41) {
        *(undefined8 **)(param_1 + 0xa70) = local_70;
        *(ulong *)(param_1 + 0xa68) = uVar16;
        uVar14 = local_70[1];
        uVar8 = local_70[2];
        uVar9 = local_70[3];
        uVar10 = local_70[4];
        uVar11 = local_70[5];
        *(undefined8 *)(param_1 + 0xa38) = *local_70;
        *(undefined8 *)(param_1 + 0xa40) = uVar14;
        *(undefined8 *)(param_1 + 0xa48) = uVar8;
        *(undefined8 *)(param_1 + 0xa50) = uVar9;
        *(undefined8 *)(param_1 + 0xa58) = uVar10;
        *(undefined8 *)(param_1 + 0xa60) = uVar11;
        *(undefined4 *)(param_1 + 0xa78) = 1;
        *(long *)(param_1 + 0xa80) = param_1;
      }
    }
    *(undefined4 *)(param_1 + 0x9c4) = 0;
LAB_001cd100:
    iVar13 = *(int *)(param_1 + 0x9b0);
    if (0x22 < iVar13) {
      if (iVar13 < 0x36) {
        switch(iVar13) {
        case 0x23:
          _PrepareH35(param_1 + 0x9c8,bVar27,local_40,local_48);
          break;
        case 0x28:
          _PrepareH41(param_1 + 0x9c8,bVar27,local_40,local_48);
          break;
        case 0x29:
          _PrepareH41(param_1 + 0x9c8,bVar27,local_40,local_48);
          break;
        case 0x2a:
          _PrepareH42(param_1 + 0x9c8,bVar27,local_40,local_48);
        }
      }
      else if (iVar13 == 0x36) {
        _PrepareH54(param_1 + 0x9c8,bVar27,local_40,local_48);
      }
      else if (iVar13 == 0x37) {
        _PrepareH55(param_1 + 0x9c8,bVar27,local_40,local_48);
      }
      else if (iVar13 == 0x41) {
        _PrepareH65(param_1 + 0x9c8,bVar27,local_40,local_48);
      }
      goto switchD_001cd132_caseD_24;
    }
    switch(iVar13) {
    case 2:
      lVar32 = *(long *)(param_1 + 0x9d0);
      if ((0x800 < (uint)local_40) || (!bVar45 || !bVar44)) {
LAB_001cd272:
        ___bzero();
        break;
      }
      if (local_40 != (undefined8 *)0x0) {
        uVar16 = 0;
        do {
          *(undefined4 *)
           (lVar32 + ((ulong)(*(long *)(local_48 + uVar16) * -0x42e1ca5843000000) >> 0x30) * 4) = 0;
          uVar16 = uVar16 + 1;
        } while (local_40 != (undefined8 *)uVar16);
        break;
      }
      goto LAB_001cd386;
    case 3:
      lVar32 = *(long *)(param_1 + 0x9d0);
      if ((0x800 < (uint)local_40) || (!bVar45 || !bVar44)) goto LAB_001cd272;
      if (local_40 == (undefined8 *)0x0) goto LAB_001cd386;
      uVar16 = 0;
      do {
        uVar39 = *(long *)(local_48 + uVar16) * -0x42e1ca5843000000;
        *(undefined4 *)(lVar32 + (uVar39 >> 0x30) * 4) = 0;
        *(undefined4 *)(lVar32 + (ulong)((ushort)(uVar39 >> 0x30) + 8 & 0xffff) * 4) = 0;
        uVar16 = uVar16 + 1;
      } while (local_40 != (undefined8 *)uVar16);
      break;
    case 4:
      _PrepareH4(param_1 + 0x9c8,bVar27,local_40,local_48);
      break;
    case 5:
      _PrepareH5(param_1 + 0x9c8,bVar27,local_40,local_48);
      break;
    case 6:
      _PrepareH6(param_1 + 0x9c8,bVar27,local_40,local_48);
      break;
    case 10:
      lVar32 = *(long *)(param_1 + 0x9d0);
      uVar19 = *(undefined4 *)(param_1 + 0x9d8);
      lVar33 = 0;
      do {
        puVar4 = (undefined4 *)(lVar32 + lVar33 * 4);
        *puVar4 = uVar19;
        puVar4[1] = uVar19;
        puVar4[2] = uVar19;
        puVar4[3] = uVar19;
        lVar33 = lVar33 + 4;
      } while (lVar33 != 0x20000);
    }
switchD_001cd132_caseD_24:
    if ((int)uVar26 == 0) {
LAB_001cd386:
      *(undefined1 (*) [16])(param_1 + 0x9a0) = (undefined1  [16])0x0;
    }
    *(undefined4 *)(param_1 + 0x9c4) = 1;
  }
LAB_001cd39e:
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar23 = (uint)uVar26;
    iVar13 = *(int *)(param_1 + 0x9b0);
    uVar20 = (uint)local_38;
    local_58 = uVar26;
    if (iVar13 < 0x23) {
      switch(iVar13) {
      case 2:
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          lVar32 = *(long *)(param_1 + 0x9d0);
          *(uint *)(lVar32 + ((ulong)(*(long *)(local_48 + (ulong)(uVar23 - 3 & uVar20)) *
                                     -0x42e1ca5843000000) >> 0x30) * 4) = uVar23 - 3;
          *(uint *)(lVar32 + ((ulong)(*(long *)(local_48 + (ulong)(uVar23 - 2 & uVar20)) *
                                     -0x42e1ca5843000000) >> 0x30) * 4) = uVar23 - 2;
          *(uint *)(lVar32 + ((ulong)(*(long *)(local_48 + (ulong)(uVar23 - 1 & uVar20)) *
                                     -0x42e1ca5843000000) >> 0x30) * 4) = uVar23 - 1;
        }
        break;
      case 3:
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          uVar30 = uVar23 - 3;
          lVar32 = *(long *)(param_1 + 0x9d0);
          uVar31 = 0xffff;
          *(uint *)(lVar32 + (ulong)((uint)(ushort)((ulong)(*(long *)(local_48 +
                                                                     (ulong)(uVar30 & uVar20)) *
                                                           -0x42e1ca5843000000) >> 0x30) +
                                     (uVar30 & 8) & 0xffff) * 4) = uVar30;
          uVar30 = uVar23 - 2;
          *(uint *)(lVar32 + (ulong)((uint)(ushort)((ulong)(*(long *)(local_48 +
                                                                     (ulong)(uVar30 & uVar20)) *
                                                           -0x42e1ca5843000000) >> 0x30) +
                                     (uVar30 & 8) & 0xffff) * 4) = uVar30;
          uVar20 = (uint)(ushort)((ulong)(*(long *)(local_48 + (ulong)(uVar23 - 1 & uVar20)) *
                                         -0x42e1ca5843000000) >> 0x30);
          uVar30 = uVar23 - 1 & 8;
LAB_001ce452:
          *(uint *)(lVar32 + (ulong)(uVar20 + uVar30 & uVar31) * 4) = uVar23 - 1;
        }
        break;
      case 4:
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          uVar30 = uVar23 - 3;
          lVar32 = *(long *)(param_1 + 0x9d0);
          uVar31 = 0x1ffff;
          *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar30 & uVar20)) *
                                                   -0x42e1ca5843000000) >> 0x2f) + (uVar30 & 0x18) &
                                    0x1ffff) * 4) = uVar30;
          uVar30 = uVar23 - 2;
          *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar30 & uVar20)) *
                                                   -0x42e1ca5843000000) >> 0x2f) + (uVar30 & 0x18) &
                                    0x1ffff) * 4) = uVar30;
          uVar20 = (uint)((ulong)(*(long *)(local_48 + (ulong)(uVar23 - 1 & uVar20)) *
                                 -0x42e1ca5843000000) >> 0x2f);
LAB_001ce44d:
          uVar30 = uVar23 - 1 & 0x18;
          goto LAB_001ce452;
        }
        break;
      case 5:
        if ((2 < (uint)local_40) && (2 < uVar23)) {
          uVar31 = (uint)(*(int *)(local_48 + (ulong)(uVar23 - 3 & uVar20)) * 0x1e35a7bd) >>
                   (*(byte *)(param_1 + 0x9d8) & 0x1f);
          lVar32 = *(long *)(param_1 + 0x9f0);
          uVar6 = *(ushort *)(lVar32 + (ulong)uVar31 * 2);
          lVar33 = *(long *)(param_1 + 0x9f8);
          *(uint *)(lVar33 + (ulong)(*(uint *)(param_1 + 0x9dc) & (uint)uVar6) * 4 +
                   (ulong)(uVar31 << (*(byte *)(param_1 + 0x9e0) & 0x1f)) * 4) = uVar23 - 3;
          *(ushort *)(lVar32 + (ulong)uVar31 * 2) = uVar6 + 1;
          uVar31 = (uint)(*(int *)(local_48 + (ulong)(uVar23 - 2 & uVar20)) * 0x1e35a7bd) >>
                   (*(byte *)(param_1 + 0x9d8) & 0x1f);
          uVar6 = *(ushort *)(lVar32 + (ulong)uVar31 * 2);
          *(uint *)(lVar33 + (ulong)(*(uint *)(param_1 + 0x9dc) & (uint)uVar6) * 4 +
                   (ulong)(uVar31 << (*(byte *)(param_1 + 0x9e0) & 0x1f)) * 4) = uVar23 - 2;
          *(ushort *)(lVar32 + (ulong)uVar31 * 2) = uVar6 + 1;
          uVar20 = (uint)(*(int *)(local_48 + (ulong)(uVar23 - 1 & uVar20)) * 0x1e35a7bd) >>
                   (*(byte *)(param_1 + 0x9d8) & 0x1f);
          uVar6 = *(ushort *)(lVar32 + (ulong)uVar20 * 2);
          *(uint *)(lVar33 + (ulong)(*(uint *)(param_1 + 0x9dc) & (uint)uVar6) * 4 +
                   (ulong)(uVar20 << (*(byte *)(param_1 + 0x9e0) & 0x1f)) * 4) = uVar23 - 1;
          *(ushort *)(lVar32 + (ulong)uVar20 * 2) = uVar6 + 1;
        }
        break;
      case 6:
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          uVar16 = *(ulong *)(param_1 + 0x9e0);
          uVar39 = (*(ulong *)(local_48 + (ulong)(uVar23 - 3 & uVar20)) & uVar16) *
                   0x1fe35a7bd3579bd3 >> (*(byte *)(param_1 + 0x9d8) & 0x3f);
          lVar32 = *(long *)(param_1 + 0xa00);
          lVar33 = *(long *)(param_1 + 0xa08);
          uVar28 = uVar39 & 0xffffffff;
          uVar6 = *(ushort *)(lVar32 + uVar28 * 2);
          uVar31 = *(uint *)(param_1 + 0x9e8);
          bVar5 = *(byte *)(param_1 + 0x9ec);
          *(ushort *)(lVar32 + uVar28 * 2) = uVar6 + 1;
          *(uint *)(lVar33 + (ulong)(uVar31 & uVar6) * 4 +
                   (ulong)(uint)((int)uVar39 << (bVar5 & 0x1f)) * 4) = uVar23 - 3;
          bVar5 = *(byte *)(param_1 + 0x9ec);
          uVar39 = (*(ulong *)(local_48 + (ulong)(uVar23 - 2 & uVar20)) & uVar16) *
                   0x1fe35a7bd3579bd3 >> (*(byte *)(param_1 + 0x9d8) & 0x3f);
          uVar28 = uVar39 & 0xffffffff;
          uVar6 = *(ushort *)(lVar32 + uVar28 * 2);
          uVar31 = *(uint *)(param_1 + 0x9e8);
          *(ushort *)(lVar32 + uVar28 * 2) = uVar6 + 1;
          *(uint *)(lVar33 + (ulong)(uVar31 & uVar6) * 4 +
                   (ulong)(uint)((int)uVar39 << (bVar5 & 0x1f)) * 4) = uVar23 - 2;
          bVar5 = *(byte *)(param_1 + 0x9ec);
          uVar39 = (uVar16 & *(ulong *)(local_48 + (ulong)(uVar23 - 1 & uVar20))) *
                   0x1fe35a7bd3579bd3 >> (*(byte *)(param_1 + 0x9d8) & 0x3f);
          uVar16 = uVar39 & 0xffffffff;
          uVar6 = *(ushort *)(lVar32 + uVar16 * 2);
          uVar20 = *(uint *)(param_1 + 0x9e8);
          *(ushort *)(lVar32 + uVar16 * 2) = uVar6 + 1;
          *(uint *)(lVar33 + (ulong)(uVar20 & uVar6) * 4 +
                   (ulong)(uint)((int)uVar39 << (bVar5 & 0x1f)) * 4) = uVar23 - 1;
          local_4c = param_3;
        }
        break;
      case 10:
        if ((2 < (uint)local_40) && (0x7f < uVar23)) {
          uVar16 = uVar26 - 0x7f;
          uVar39 = ((long)local_40 + uVar26) - 0x7f;
          if (uVar26 < uVar39) {
            uVar39 = uVar26;
          }
          if (uVar16 < uVar39) {
            local_b8 = *(ulong *)(param_1 + 0x9c8);
            lVar32 = *(long *)(param_1 + 0x9d0);
            local_c0 = *(long *)(param_1 + 0x9e0);
            do {
              uVar28 = uVar26 - uVar16;
              if (uVar28 < 0x10) {
                uVar28 = 0xf;
              }
              uVar36 = (ulong)((uint)uVar16 & uVar20);
              uVar41 = (ulong)((uint)(*(int *)(local_48 + uVar36) * 0x1e35a7bd) >> 0xf);
              uVar40 = (ulong)*(uint *)(lVar32 + uVar41 * 4);
              local_b0 = (local_b8 & uVar16) * 2 + 1;
              local_98 = (local_b8 & uVar16) * 2;
              *(uint *)(lVar32 + uVar41 * 4) = (uint)uVar16;
              if (uVar16 != uVar40) {
                lVar33 = uVar36 + local_48;
                uVar36 = 0x40;
                local_a8 = 0;
                uVar41 = 0;
LAB_001cde37:
                bVar27 = uVar36 != 0;
                uVar36 = uVar36 - 1;
                if ((uVar16 - uVar40 <= local_b8 - uVar28) && (bVar27)) {
                  uVar23 = (uint)uVar40;
                  local_60 = (ulong *)CONCAT44(local_60._4_4_,uVar23);
                  uVar34 = uVar41;
                  if (local_a8 < uVar41) {
                    uVar34 = local_a8;
                  }
                  lVar7 = lVar33 + uVar34;
                  lVar35 = (ulong)(uVar23 & uVar20) + local_48;
                  pcVar37 = (char *)(lVar35 + uVar34);
                  uVar29 = 0x80 - uVar34;
                  if (7 < uVar29) {
                    uVar25 = uVar29 & 0xfffffffffffffff8;
                    lVar43 = 0;
                    uVar22 = 0;
LAB_001cdead:
                    uVar38 = *(ulong *)(lVar7 + uVar22 * 8);
                    if (*(ulong *)(pcVar37 + uVar22 * 8) == uVar38) goto code_r0x001cdeba;
                    uVar38 = uVar38 ^ *(ulong *)(pcVar37 + uVar22 * 8);
                    uVar29 = 0;
                    if (uVar38 != 0) {
                      for (; (uVar38 >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                      }
                    }
                    uVar22 = (uVar29 >> 3 & 0x1fffffff) - lVar43;
                    goto LAB_001cdef7;
                  }
                  uVar25 = 0;
                  goto LAB_001cdf7f;
                }
              }
LAB_001cddcd:
              uVar19 = *(undefined4 *)(param_1 + 0x9d8);
              *(undefined4 *)(local_c0 + local_98 * 4) = uVar19;
LAB_001cddde:
              *(undefined4 *)(local_c0 + local_b0 * 4) = uVar19;
              uVar16 = uVar16 + 1;
              local_78 = param_5;
              local_4c = param_3;
            } while (uVar16 != uVar39);
          }
        }
      }
    }
    else if (iVar13 < 0x36) {
      switch(iVar13) {
      case 0x23:
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          uVar31 = uVar23 - 3;
          lVar32 = *(long *)(param_1 + 0x9d0);
          *(uint *)(lVar32 + (ulong)((uint)(ushort)((ulong)(*(long *)(local_48 +
                                                                     (ulong)(uVar31 & uVar20)) *
                                                           -0x42e1ca5843000000) >> 0x30) +
                                     (uVar31 & 8) & 0xffff) * 4) = uVar31;
          uVar31 = uVar23 - 2;
          *(uint *)(lVar32 + (ulong)((uint)(ushort)((ulong)(*(long *)(local_48 +
                                                                     (ulong)(uVar31 & uVar20)) *
                                                           -0x42e1ca5843000000) >> 0x30) +
                                     (uVar31 & 8) & 0xffff) * 4) = uVar31;
          uVar23 = uVar23 - 1;
          *(uint *)(lVar32 + (ulong)((uint)(ushort)((ulong)(*(long *)(local_48 +
                                                                     (ulong)(uVar23 & uVar20)) *
                                                           -0x42e1ca5843000000) >> 0x30) +
                                     (uVar23 & 8) & 0xffff) * 4) = uVar23;
        }
        if ((uVar26 & 3) != 0) {
          uVar16 = 4 - (uVar26 & 3);
          bVar27 = local_40 < uVar16;
          local_40 = (undefined8 *)((long)local_40 - uVar16);
          if (bVar27) {
            local_40 = (undefined8 *)0;
          }
          uVar26 = uVar26 + uVar16;
        }
        uVar16 = (ulong)((uint)uVar26 & uVar20);
        puVar21 = (undefined8 *)(local_38 - uVar16);
        if (local_40 < puVar21) {
          puVar21 = local_40;
        }
        if (0x1f < puVar21) {
          iVar13 = 0;
          uVar39 = 0xfffffffffffffffc;
          do {
            iVar13 = iVar13 * *(int *)(param_1 + 0x9f4) +
                     (uint)*(byte *)(uVar16 + local_48 + 4 + uVar39) + 1;
            uVar39 = uVar39 + 4;
          } while (uVar39 < 0x1c);
LAB_001ce565:
          *(int *)(param_1 + 0x9d8) = iVar13;
        }
LAB_001ce56c:
        *(ulong *)(param_1 + 0x9e8) = uVar26;
        break;
      case 0x28:
      case 0x29:
        if ((2 < (uint)local_40) && (2 < uVar23)) {
          uVar16 = uVar26 - 3;
          lVar32 = *(long *)(param_1 + 0x9d8);
          uVar23 = (uint)(*(int *)(local_48 + (ulong)((uint)uVar16 & uVar20)) * 0x1e35a7bd) >> 0x11;
          uVar39 = (ulong)uVar23;
          uVar6 = *(ushort *)(param_1 + 0x9c8);
          *(ushort *)(param_1 + 0x9c8) = uVar6 + 1;
          uVar28 = uVar16 - *(uint *)(lVar32 + uVar39 * 4);
          *(char *)(lVar32 + 0x30000 + (uVar16 & 0xffff)) = (char)uVar23;
          if (0xfffe < uVar28) {
            uVar28 = 0xffff;
          }
          *(short *)(lVar32 + 0x40000 + (ulong)uVar6 * 4) = (short)uVar28;
          *(undefined2 *)(lVar32 + 0x40002 + (ulong)uVar6 * 4) =
               *(undefined2 *)(lVar32 + 0x20000 + uVar39 * 2);
          *(uint *)(lVar32 + uVar39 * 4) = (uint)uVar16;
          *(ushort *)(lVar32 + 0x20000 + uVar39 * 2) = uVar6;
          uVar16 = uVar26 - 2;
          lVar32 = *(long *)(param_1 + 0x9d8);
          uVar23 = (uint)(*(int *)(local_48 + (ulong)((uint)uVar16 & uVar20)) * 0x1e35a7bd) >> 0x11;
          uVar39 = (ulong)uVar23;
          uVar6 = *(ushort *)(param_1 + 0x9c8);
          *(ushort *)(param_1 + 0x9c8) = uVar6 + 1;
          uVar28 = uVar16 - *(uint *)(lVar32 + uVar39 * 4);
          *(char *)(lVar32 + 0x30000 + (uVar16 & 0xffff)) = (char)uVar23;
          if (0xfffe < uVar28) {
            uVar28 = 0xffff;
          }
          *(short *)(lVar32 + 0x40000 + (ulong)uVar6 * 4) = (short)uVar28;
          *(undefined2 *)(lVar32 + 0x40002 + (ulong)uVar6 * 4) =
               *(undefined2 *)(lVar32 + 0x20000 + uVar39 * 2);
          *(uint *)(lVar32 + uVar39 * 4) = (uint)uVar16;
          *(ushort *)(lVar32 + 0x20000 + uVar39 * 2) = uVar6;
          uVar26 = uVar26 - 1;
          lVar32 = *(long *)(param_1 + 0x9d8);
          uVar23 = (uint)(*(int *)(local_48 + (ulong)((uint)uVar26 & uVar20)) * 0x1e35a7bd) >> 0x11;
          uVar16 = (ulong)uVar23;
          uVar6 = *(ushort *)(param_1 + 0x9c8);
          *(ushort *)(param_1 + 0x9c8) = uVar6 + 1;
          uVar39 = uVar26 - *(uint *)(lVar32 + uVar16 * 4);
          *(char *)(lVar32 + 0x30000 + (uVar26 & 0xffff)) = (char)uVar23;
          if (0xfffe < uVar39) {
            uVar39 = 0xffff;
          }
          *(short *)(lVar32 + 0x40000 + (ulong)uVar6 * 4) = (short)uVar39;
          *(undefined2 *)(lVar32 + 0x40002 + (ulong)uVar6 * 4) =
               *(undefined2 *)(lVar32 + 0x20000 + uVar16 * 2);
          *(uint *)(lVar32 + uVar16 * 4) = (uint)uVar26;
          *(ushort *)(lVar32 + 0x20000 + uVar16 * 2) = uVar6;
        }
        break;
      case 0x2a:
        if ((2 < (uint)local_40) && (2 < uVar23)) {
          uVar16 = uVar26 - 3;
          lVar32 = *(long *)(param_1 + 0xdd0);
          uVar31 = (uint)(*(int *)(local_48 + (ulong)((uint)uVar16 & uVar20)) * 0x1e35a7bd) >> 0x11;
          uVar39 = (ulong)uVar31;
          uVar23 = uVar31 & 0x1ff;
          uVar6 = *(ushort *)(param_1 + 0x9c8 + (ulong)uVar23 * 2);
          *(ushort *)(param_1 + 0x9c8 + (ulong)uVar23 * 2) = uVar6 + 1;
          lVar33 = (ulong)(uVar23 << 0xb) + lVar32;
          uVar28 = (ulong)uVar6 & 0x1ff;
          uVar41 = uVar16 - *(uint *)(lVar32 + uVar39 * 4);
          if (0xfffe < uVar41) {
            uVar41 = 0xffff;
          }
          *(char *)(lVar32 + 0x30000 + (uVar16 & 0xffff)) = (char)uVar31;
          *(short *)(lVar33 + 0x40000 + uVar28 * 4) = (short)uVar41;
          *(undefined2 *)(lVar33 + 0x40002 + uVar28 * 4) =
               *(undefined2 *)(lVar32 + 0x20000 + uVar39 * 2);
          *(uint *)(lVar32 + uVar39 * 4) = (uint)uVar16;
          *(short *)(lVar32 + 0x20000 + uVar39 * 2) = (short)uVar28;
          uVar16 = uVar26 - 2;
          lVar32 = *(long *)(param_1 + 0xdd0);
          uVar23 = (uint)(*(int *)(local_48 + (ulong)((uint)uVar16 & uVar20)) * 0x1e35a7bd) >> 0x11;
          uVar28 = (ulong)uVar23;
          uVar31 = uVar23 & 0x1ff;
          uVar6 = *(ushort *)(param_1 + 0x9c8 + (ulong)uVar31 * 2);
          *(ushort *)(param_1 + 0x9c8 + (ulong)uVar31 * 2) = uVar6 + 1;
          lVar33 = (ulong)(uVar31 << 0xb) + lVar32;
          uVar41 = (ulong)uVar6 & 0x1ff;
          uVar39 = uVar16 - *(uint *)(lVar32 + uVar28 * 4);
          *(char *)(lVar32 + 0x30000 + (uVar16 & 0xffff)) = (char)uVar23;
          if (0xfffe < uVar39) {
            uVar39 = 0xffff;
          }
          *(short *)(lVar33 + 0x40000 + uVar41 * 4) = (short)uVar39;
          *(undefined2 *)(lVar33 + 0x40002 + uVar41 * 4) =
               *(undefined2 *)(lVar32 + 0x20000 + uVar28 * 2);
          *(uint *)(lVar32 + uVar28 * 4) = (uint)uVar16;
          *(short *)(lVar32 + 0x20000 + uVar28 * 2) = (short)uVar41;
          uVar26 = uVar26 - 1;
          lVar32 = *(long *)(param_1 + 0xdd0);
          uVar20 = (uint)(*(int *)(local_48 + (ulong)((uint)uVar26 & uVar20)) * 0x1e35a7bd) >> 0x11;
          uVar16 = (ulong)uVar20;
          uVar23 = uVar20 & 0x1ff;
          uVar6 = *(ushort *)(param_1 + 0x9c8 + (ulong)uVar23 * 2);
          *(ushort *)(param_1 + 0x9c8 + (ulong)uVar23 * 2) = uVar6 + 1;
          uVar39 = (ulong)uVar6 & 0x1ff;
          uVar28 = uVar26 - *(uint *)(lVar32 + uVar16 * 4);
          *(char *)(lVar32 + 0x30000 + (uVar26 & 0xffff)) = (char)uVar20;
          lVar33 = (ulong)(uVar23 << 0xb) + lVar32;
          if (0xfffe < uVar28) {
            uVar28 = 0xffff;
          }
          *(short *)(lVar33 + 0x40000 + uVar39 * 4) = (short)uVar28;
          *(undefined2 *)(lVar33 + 0x40002 + uVar39 * 4) =
               *(undefined2 *)(lVar32 + 0x20000 + uVar16 * 2);
          *(uint *)(lVar32 + uVar16 * 4) = (uint)uVar26;
          *(short *)(lVar32 + 0x20000 + uVar16 * 2) = (short)uVar39;
        }
      }
    }
    else if (iVar13 == 0x36) {
      if ((6 < (uint)local_40) && (2 < uVar23)) {
        uVar30 = uVar23 - 3;
        lVar32 = *(long *)(param_1 + 0x9d0);
        uVar31 = 0xfffff;
        *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar30 & uVar20)) *
                                                 0x35a7bd1e35a7bd00) >> 0x2c) + (uVar30 & 0x18) &
                                  0xfffff) * 4) = uVar30;
        uVar30 = uVar23 - 2;
        *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar30 & uVar20)) *
                                                 0x35a7bd1e35a7bd00) >> 0x2c) + (uVar30 & 0x18) &
                                  0xfffff) * 4) = uVar30;
        uVar20 = (uint)((ulong)(*(long *)(local_48 + (ulong)(uVar23 - 1 & uVar20)) *
                               0x35a7bd1e35a7bd00) >> 0x2c);
        goto LAB_001ce44d;
      }
    }
    else {
      if (iVar13 == 0x37) {
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          uVar31 = uVar23 - 3;
          lVar32 = *(long *)(param_1 + 0x9d0);
          *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar31 & uVar20)) *
                                                   0x35a7bd1e35a7bd00) >> 0x2c) + (uVar31 & 0x18) &
                                    0xfffff) * 4) = uVar31;
          uVar31 = uVar23 - 2;
          *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar31 & uVar20)) *
                                                   0x35a7bd1e35a7bd00) >> 0x2c) + (uVar31 & 0x18) &
                                    0xfffff) * 4) = uVar31;
          uVar23 = uVar23 - 1;
          *(uint *)(lVar32 + (ulong)((uint)((ulong)(*(long *)(local_48 + (ulong)(uVar23 & uVar20)) *
                                                   0x35a7bd1e35a7bd00) >> 0x2c) + (uVar23 & 0x18) &
                                    0xfffff) * 4) = uVar23;
        }
        if ((uVar26 & 3) != 0) {
          uVar16 = 4 - (uVar26 & 3);
          bVar27 = local_40 < uVar16;
          local_40 = (undefined8 *)((long)local_40 - uVar16);
          if (bVar27) {
            local_40 = (undefined8 *)0;
          }
          uVar26 = uVar26 + uVar16;
        }
        uVar16 = (ulong)((uint)uVar26 & uVar20);
        puVar21 = (undefined8 *)(local_38 - uVar16);
        if (local_40 < puVar21) {
          puVar21 = local_40;
        }
        if (0x1f < puVar21) {
          iVar13 = 0;
          uVar39 = 0xfffffffffffffffc;
          do {
            iVar13 = iVar13 * *(int *)(param_1 + 0x9f4) +
                     (uint)*(byte *)(uVar16 + local_48 + 4 + uVar39) + 1;
            uVar39 = uVar39 + 4;
          } while (uVar39 < 0x1c);
          goto LAB_001ce565;
        }
        goto LAB_001ce56c;
      }
      if (iVar13 == 0x41) {
        if ((6 < (uint)local_40) && (2 < uVar23)) {
          uVar16 = *(ulong *)(param_1 + 0x9e0);
          uVar39 = (*(ulong *)(local_48 + (ulong)(uVar23 - 3 & uVar20)) & uVar16) *
                   0x1fe35a7bd3579bd3 >> (*(byte *)(param_1 + 0x9d8) & 0x3f);
          lVar32 = *(long *)(param_1 + 0xa00);
          lVar33 = *(long *)(param_1 + 0xa08);
          uVar28 = uVar39 & 0xffffffff;
          uVar6 = *(ushort *)(lVar32 + uVar28 * 2);
          uVar31 = *(uint *)(param_1 + 0x9e8);
          bVar5 = *(byte *)(param_1 + 0x9ec);
          *(ushort *)(lVar32 + uVar28 * 2) = uVar6 + 1;
          *(uint *)(lVar33 + (ulong)(uVar31 & uVar6) * 4 +
                   (ulong)(uint)((int)uVar39 << (bVar5 & 0x1f)) * 4) = uVar23 - 3;
          bVar5 = *(byte *)(param_1 + 0x9ec);
          uVar39 = (*(ulong *)(local_48 + (ulong)(uVar23 - 2 & uVar20)) & uVar16) *
                   0x1fe35a7bd3579bd3 >> (*(byte *)(param_1 + 0x9d8) & 0x3f);
          uVar28 = uVar39 & 0xffffffff;
          uVar6 = *(ushort *)(lVar32 + uVar28 * 2);
          uVar31 = *(uint *)(param_1 + 0x9e8);
          *(ushort *)(lVar32 + uVar28 * 2) = uVar6 + 1;
          *(uint *)(lVar33 + (ulong)(uVar31 & uVar6) * 4 +
                   (ulong)(uint)((int)uVar39 << (bVar5 & 0x1f)) * 4) = uVar23 - 2;
          bVar5 = *(byte *)(param_1 + 0x9ec);
          uVar39 = (uVar16 & *(ulong *)(local_48 + (ulong)(uVar23 - 1 & uVar20))) *
                   0x1fe35a7bd3579bd3 >> (*(byte *)(param_1 + 0x9d8) & 0x3f);
          uVar16 = uVar39 & 0xffffffff;
          uVar6 = *(ushort *)(lVar32 + uVar16 * 2);
          uVar31 = *(uint *)(param_1 + 0x9e8);
          *(ushort *)(lVar32 + uVar16 * 2) = uVar6 + 1;
          *(uint *)(lVar33 + (ulong)(uVar31 & uVar6) * 4 +
                   (ulong)(uint)((int)uVar39 << (bVar5 & 0x1f)) * 4) = uVar23 - 1;
          local_78 = param_5;
          local_4c = param_3;
        }
        puVar21 = (undefined8 *)(local_38 - (uVar20 & uVar23));
        if (local_40 <= puVar21) {
          puVar21 = local_40;
        }
        if (0x1f < (uint)puVar21) {
          lVar32 = 0;
          iVar13 = 0;
          do {
            iVar13 = iVar13 * *(int *)(param_1 + 0xa2c) +
                     (uint)*(byte *)((ulong)(uVar20 & uVar23) + local_48 + lVar32) + 1;
            lVar32 = lVar32 + 1;
          } while (lVar32 != 0x20);
          *(int *)(param_1 + 0xa10) = iVar13;
        }
        *(ulong *)(param_1 + 0xa20) = uVar26;
      }
    }
  }
  uVar16 = *(ulong *)(param_1 + 0x920);
  uVar23 = (uint)uVar16;
  if (0xbfffffff < uVar16) {
    uVar23 = ((int)(uVar23 * 2) >> 1 & 0xc0000000U) + (uVar23 & 0x3fffffff) + 0x80000000;
  }
  if ((*(int *)(param_1 + 4) < 10) ||
     (iVar13 = _BrotliIsMostlyUTF8(0x3fe8000000000000,local_48,uVar23,local_38,
                                   *(long *)(param_1 + 0x8c8) - uVar16), iVar13 != 0)) {
    local_a8 = 2;
  }
  else {
    local_a8 = 3;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    return 0;
  }
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x908);
  iVar13 = (int)local_a8;
  if ((*(long *)*pauVar2 != 0) && (*(long *)(param_1 + 0x918) == 0)) {
    _ExtendLastCommand(param_1,&local_90,&local_8c);
  }
  puVar42 = PTR___kBrotliContextLookupTable_00441030 + (uint)(iVar13 << 9);
  local_40 = (undefined8 *)(param_1 + 0x930);
  local_60 = (ulong *)(param_1 + 0x918);
  lVar32 = *(long *)(param_1 + 0x908) * 0x10 + *(long *)(param_1 + 0x900);
  puVar3 = (ulong *)(param_1 + 0x910);
  if (*(int *)(param_1 + 4) == 0xb) {
    local_78 = param_5;
    _BrotliCreateHqZopfliBackwardReferences
              (local_68,local_90,local_8c,local_48,local_38,puVar42,param_1,local_70,local_40,
               local_60,lVar32,pauVar2,puVar3);
  }
  else {
    if (*(int *)(param_1 + 4) != 10) {
      local_78 = param_5;
      _BrotliCreateBackwardReferences
                (local_90,local_8c,local_48,local_38,puVar42,param_1,local_70,local_40,local_60,
                 lVar32,pauVar2,puVar3);
      goto LAB_001cd7c1;
    }
    local_78 = param_5;
    _BrotliCreateZopfliBackwardReferences
              (local_68,local_90,local_8c,local_48,local_38,puVar42,param_1,local_70,local_40,
               local_60,lVar32,pauVar2,puVar3);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    return 0;
  }
LAB_001cd7c1:
  iVar13 = *(int *)(param_1 + 0xc);
  iVar24 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) <= iVar13) {
    iVar24 = iVar13;
  }
  cVar18 = '\x17';
  if (iVar24 < 0x17) {
    cVar18 = (char)iVar24;
  }
  uVar16 = 1L << (cVar18 + 1U & 0x3f);
  lVar32 = *(long *)(param_1 + 0x8c8);
  lVar33 = *(long *)(param_1 + 0x920);
  if (*(int *)(param_1 + 4) < 4) {
    bVar27 = 0x2ffe < *(long *)*pauVar2 + *puVar3;
  }
  else {
    bVar27 = false;
  }
  uVar39 = lVar32 - lVar33;
  local_a0 = pauVar2;
  if ((((param_3 != 0 || local_50 != 0) || (bVar27)) ||
      (uVar16 < (1L << ((byte)iVar13 & 0x3f)) + uVar39)) ||
     ((uVar16 = uVar16 >> 3, uVar16 <= *puVar3 || (uVar16 <= *(ulong *)*pauVar2)))) {
    uVar16 = *local_60;
    if (uVar16 != 0) {
      lVar7 = *(long *)(param_1 + 0x900);
      lVar35 = *(long *)(param_1 + 0x908);
      *(long *)(param_1 + 0x908) = lVar35 + 1;
      lVar35 = lVar35 * 0x10;
      *(int *)(lVar7 + lVar35) = (int)uVar16;
      *(undefined8 *)(lVar7 + 4 + lVar35) = 0x8000000;
      *(undefined2 *)(lVar7 + 0xe + lVar35) = 0x10;
      if (uVar16 < 6) {
        uVar28 = uVar16 & 0xffffffff;
      }
      else if (uVar16 < 0x82) {
        uVar23 = 0x1f;
        uVar20 = (uint)(uVar16 - 2);
        if (uVar20 != 0) {
          for (; uVar20 >> uVar23 == 0; uVar23 = uVar23 - 1) {
          }
        }
        uVar28 = (ulong)((int)(uVar16 - 2 >> ((char)(uVar23 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                         (uVar23 ^ 0xffffffe0) * 2 + 0x40);
      }
      else if (uVar16 < 0x842) {
        uVar20 = (int)uVar16 - 0x42;
        uVar23 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> uVar23 == 0; uVar23 = uVar23 - 1) {
          }
        }
        uVar28 = (ulong)((uVar23 ^ 0xffe0) + 0x2a);
      }
      else {
        uVar28 = 0x15;
        if (0x1841 < uVar16) {
          uVar28 = (ulong)(ushort)(0x17 - (uVar16 < 0x5842));
        }
      }
      iVar13 = (int)((uVar28 & 0xffff) >> 3) * 3;
      *(ushort *)(lVar7 + lVar35 + 0xc) =
           ((ushort)(0x520d40 >> ((char)iVar13 * '\x02' & 0x1fU)) & 0xc0) + (short)iVar13 * 0x40 +
           ((ushort)uVar28 & 7) * 8 + 0x42;
      *puVar3 = *puVar3 + uVar16;
      *local_60 = 0;
    }
    if (lVar32 == lVar33 && local_50 == 0) {
      *local_80 = 0;
    }
    else {
      puVar15 = (undefined1 *)_GetBrotliStorage(param_1,(int)uVar39 * 2 + 0x1f7);
      puVar21 = local_40;
      local_88 = (ulong)*(byte *)(param_1 + 0x982);
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0;
      }
      *puVar15 = *(undefined1 *)(param_1 + 0x980);
      puVar15[1] = *(undefined1 *)(param_1 + 0x981);
      _WriteMetaBlockInternal
                (local_68,local_48,local_38,*(undefined8 *)(param_1 + 0x920),uVar39 & 0xffffffff,
                 local_50,local_a8,param_1,*(undefined1 *)(param_1 + 0x984),
                 *(undefined1 *)(param_1 + 0x985),*(undefined8 *)(param_1 + 0x910),
                 *(undefined8 *)(param_1 + 0x908),*(undefined8 *)(param_1 + 0x900),
                 (undefined8 *)(param_1 + 0x970),local_40,&local_88,puVar15);
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0;
      }
      uVar16 = local_88 >> 3;
      *(ushort *)(param_1 + 0x980) = (ushort)(byte)puVar15[uVar16];
      *(byte *)(param_1 + 0x982) = (byte)local_88 & 7;
      *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)(param_1 + 0x8c8);
      iVar13 = _UpdateLastProcessedPos(param_1);
      if (iVar13 != 0) {
        *(undefined4 *)(param_1 + 0x9c4) = 0;
      }
      lVar32 = *(long *)(param_1 + 0x920);
      if (lVar32 != 0) {
        *(undefined1 *)(param_1 + 0x984) =
             *(undefined1 *)(local_48 + (ulong)((uint)local_38 & (int)lVar32 - 1U));
        if (lVar32 != 1) {
          *(undefined1 *)(param_1 + 0x985) =
               *(undefined1 *)(local_48 + (ulong)((uint)local_38 & (int)lVar32 - 2U));
        }
      }
      *local_a0 = (undefined1  [16])0x0;
      uVar14 = puVar21[1];
      *(undefined8 *)(param_1 + 0x970) = *puVar21;
      *(undefined8 *)(param_1 + 0x978) = uVar14;
      *local_78 = puVar15;
      *local_80 = uVar16;
    }
  }
  else {
    iVar13 = _UpdateLastProcessedPos(param_1);
    if (iVar13 != 0) {
      *(undefined4 *)(param_1 + 0x9c4) = 0;
    }
    *local_80 = 0;
  }
  return 1;
code_r0x001cdeba:
  uVar22 = uVar22 + 1;
  lVar43 = lVar43 + -8;
  if (uVar29 >> 3 == uVar22) goto code_r0x001cdec6;
  goto LAB_001cdead;
code_r0x001cdec6:
  pcVar37 = pcVar37 + -lVar43;
LAB_001cdf7f:
  uVar29 = uVar29 & 7;
  uVar22 = uVar25;
  if (uVar29 != 0) {
    uVar38 = uVar25 | uVar29;
    do {
      uVar22 = uVar25;
      if (*(char *)(lVar7 + uVar25) != *pcVar37) break;
      pcVar37 = pcVar37 + 1;
      uVar25 = uVar25 + 1;
      uVar29 = uVar29 - 1;
      uVar22 = uVar38;
    } while (uVar29 != 0);
  }
LAB_001cdef7:
  uVar22 = uVar22 + uVar34;
  local_40 = (undefined8 *)uVar36;
  local_a0 = (undefined1 (*) [16])uVar41;
  if (0x7f < uVar22) {
    *(undefined4 *)(local_c0 + local_98 * 4) = *(undefined4 *)(local_c0 + (uVar40 & local_b8) * 8);
    uVar19 = *(undefined4 *)(local_c0 + 4 + (uVar40 & local_b8) * 8);
    goto LAB_001cddde;
  }
  uVar40 = (uVar40 & local_b8) * 2;
  if (*(byte *)(lVar35 + uVar22) < *(byte *)(lVar33 + uVar22)) {
    *(uint *)(local_c0 + local_98 * 4) = uVar23;
    uVar40 = uVar40 | 1;
    local_a8 = uVar22;
    local_98 = uVar40;
  }
  else {
    *(uint *)(local_c0 + local_b0 * 4) = uVar23;
    uVar41 = uVar22;
    local_b0 = uVar40;
  }
  uVar40 = (ulong)*(uint *)(local_c0 + uVar40 * 4);
  if (uVar16 == uVar40) goto LAB_001cddcd;
  goto LAB_001cde37;
}

