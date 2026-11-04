// rea decompile_all
// name: _BrotliEncoderCompressStream
// address: 0x1cb734
// body: available
// range: 0x1cb734-0x1cc6ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_BrotliEncoderCompressStream
          (long param_1,undefined8 param_2,ulong *param_3,long *param_4,ulong *param_5,long *param_6
          ,long *param_7)

{
  char *pcVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  byte bVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  void *pvVar20;
  byte bVar21;
  uint uVar22;
  ulong *puVar23;
  long *plVar24;
  bool bVar25;
  bool bVar26;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  int local_90;
  uint local_8c;
  ulong local_88;
  ulong local_80;
  long local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  long *local_50;
  ulong *local_48;
  long *local_40;
  ulong *local_38;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    return 0;
  }
  local_40 = (long *)param_2;
  local_38 = param_3;
  if (*(int *)(param_1 + 0x21bc) == 0) {
    *(undefined4 *)(param_1 + 0x980) = 0xfe000000;
    *(undefined4 *)(param_1 + 0x21b0) = 0xffffffff;
    uVar22 = *(uint *)(param_1 + 4);
    uVar17 = 0;
    if (0 < (int)uVar22) {
      uVar17 = uVar22;
    }
    uVar12 = 0xb;
    if ((int)uVar17 < 0xb) {
      uVar12 = uVar17;
    }
    *(uint *)(param_1 + 4) = uVar12;
    if ((int)uVar22 < 3) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    uVar17 = *(uint *)(param_1 + 8);
    uVar12 = 10;
    if ((int)uVar17 < 10) {
LAB_001cb7e4:
      *(uint *)(param_1 + 8) = uVar12;
      uVar17 = uVar12;
    }
    else {
      uVar12 = 0x1e;
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar12 = 0x18;
      }
      if (uVar12 < uVar17) goto LAB_001cb7e4;
    }
    uVar12 = uVar17;
    if ((1 < (int)uVar22) && (uVar12 = 0xe, 3 < uVar22)) {
      uVar12 = *(uint *)(param_1 + 0xc);
      if (uVar12 == 0) {
        uVar12 = 0x10;
        if (((8 < uVar22) && (0x10 < uVar17)) && (uVar12 = 0x12, uVar17 < 0x12)) {
          uVar12 = uVar17;
        }
      }
      else {
        uVar22 = 0x10;
        if (0x10 < (int)uVar12) {
          uVar22 = uVar12;
        }
        uVar12 = 0x18;
        if ((int)uVar22 < 0x18) {
          uVar12 = uVar22;
        }
      }
    }
    *(uint *)(param_1 + 0xc) = uVar12;
    _ChooseDistanceParams(param_1);
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (uVar5 != 0) {
      *(undefined1 *)(param_1 + 0x983) = 2;
      *(undefined8 *)(param_1 + 0x930) = 0xfffffff0fffffff0;
      *(undefined8 *)(param_1 + 0x938) = 0xfffffff0fffffff0;
      *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_1 + 0x930);
      *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_1 + 0x934);
      *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_1 + 0x938);
      *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(param_1 + 0x93c);
    }
    uVar22 = *(uint *)(param_1 + 8);
    bVar9 = (byte)*(int *)(param_1 + 0xc);
    bVar21 = bVar9;
    if (*(int *)(param_1 + 0xc) < (int)uVar22) {
      bVar21 = (byte)uVar22;
    }
    iVar18 = 1 << (bVar21 + 1 & 0x1f);
    iVar19 = 1 << (bVar9 & 0x1f);
    uVar17 = 0x12;
    if (0x12 < (int)uVar22) {
      uVar17 = uVar22;
    }
    if (1 < *(uint *)(param_1 + 4)) {
      uVar17 = uVar22;
    }
    *(int *)(param_1 + 0x8d0) = iVar18;
    *(int *)(param_1 + 0x8d4) = iVar18 + -1;
    *(int *)(param_1 + 0x8d8) = iVar19;
    *(int *)(param_1 + 0x8dc) = iVar18 + iVar19;
    if (uVar5 == 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
        if (uVar17 == 0x10) {
          uVar3 = 1;
          uVar11 = 0;
        }
        else if (uVar17 == 0x11) {
          uVar3 = 7;
          uVar11 = 1;
        }
        else if ((int)uVar17 < 0x12) {
          uVar11 = (short)uVar17 * 0x10 - 0x7f;
          uVar3 = 7;
        }
        else {
          uVar11 = (short)uVar17 * 2 - 0x21;
          uVar3 = 4;
        }
      }
      else {
        uVar11 = (ushort)((uVar17 & 0x3f) << 8) | 0x11;
        uVar3 = 0xe;
      }
      *(ushort *)(param_1 + 0x980) = uVar11;
      *(undefined1 *)(param_1 + 0x982) = uVar3;
    }
    else {
      uVar4 = (1L << ((byte)uVar17 & 0x3f)) - 0x10;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      *(ulong *)(param_1 + 0x10) = uVar4;
    }
    if (*(uint *)(param_1 + 4) == 0) {
      *(undefined8 *)(param_1 + 0x1e60) = 0xc0c0c0c0c0c0c0c;
      *(undefined8 *)(param_1 + 0x1e68) = 0xc0c0c0c;
      *(undefined8 *)(param_1 + 0x1e50) = 0x505050505040404;
      *(undefined8 *)(param_1 + 0x1e58) = 0xa08070707060605;
      *(undefined8 *)(_AMSupportX509CreateDerCertFromPEM + param_1 + 4) = 0x505060606060606;
      *(undefined8 *)(AMSupportStaticURLConnectionDelegate::init + param_1 + 2) = 0x404040405050505;
      *(undefined8 *)(param_1 + 0x1e30) = 5;
      *(undefined8 *)(param_1 + 0x1e38) = 0;
      *(undefined8 *)(param_1 + 0x1e20) = 0xa0a0a0a09080807;
      *(undefined8 *)(param_1 + 0x1e28) = 0xa0a0a0a0a0a0a0a;
      *(undefined8 *)(param_1 + 0x1e10) = 0xa0a0a0a0a0a0707;
      *(undefined8 *)(param_1 + 0x1e18) = 0x606050505040400;
      *(undefined8 *)(param_1 + 0x1e00) = 0x404040404000000;
      *(undefined8 *)(param_1 + 0x1e08) = 0x707060606060505;
      *(undefined8 *)(param_1 + 0x1df0) = 0x707060605040400;
      *(undefined8 *)(param_1 + 0x1df8) = 0x808080808070707;
      _memcpy((void *)(param_1 + 0x1e70),&_InitCommandPrefixCodes_kDefaultCommandBits,0x100);
      pcVar1 = (char *)(param_1 + 0x1f70);
      pcVar1[0] = -1;
      pcVar1[1] = 'w';
      pcVar1[2] = -0x2b;
      pcVar1[3] = -0x41;
      pcVar1[4] = -0x19;
      pcVar1[5] = -0x22;
      pcVar1[6] = -0x16;
      pcVar1[7] = -0x62;
      pcVar1 = (char *)(param_1 + 0x1f78);
      pcVar1[0] = 'Q';
      pcVar1[1] = ']';
      pcVar1[2] = -0x22;
      pcVar1[3] = -0x3a;
      pcVar1[4] = 'p';
      pcVar1[5] = 'W';
      pcVar1[6] = -0x44;
      pcVar1[7] = 'X';
      pcVar1 = (char *)(param_1 + 0x1f80);
      pcVar1[0] = 'X';
      pcVar1[1] = 'X';
      pcVar1[2] = -0x28;
      pcVar1[3] = -0x28;
      pcVar1[4] = 'X';
      pcVar1[5] = -0x2b;
      pcVar1[6] = -0x35;
      pcVar1[7] = -0x74;
      pcVar1 = (char *)(param_1 + 0x1f88);
      pcVar1[0] = -0x16;
      pcVar1[1] = -0x20;
      pcVar1[2] = -0x3d;
      pcVar1[3] = -0x79;
      pcVar1[4] = '\x1f';
      pcVar1[5] = -0x7d;
      pcVar1[6] = -0x3f;
      pcVar1[7] = '`';
      pcVar1 = (char *)(param_1 + 0x1f90);
      pcVar1[0] = '\x1c';
      pcVar1[1] = 'g';
      pcVar1[2] = -0x4e;
      pcVar1[3] = -0x56;
      pcVar1[4] = '\x06';
      pcVar1[5] = -0x7d;
      pcVar1[6] = -0x3f;
      pcVar1[7] = '`';
      pcVar1 = (char *)(param_1 + 0x1f98);
      pcVar1[0] = '0';
      pcVar1[1] = '\x18';
      pcVar1[2] = -0x34;
      pcVar1[3] = -0x5f;
      pcVar1[4] = -0x32;
      pcVar1[5] = -0x78;
      pcVar1[6] = 'T';
      pcVar1[7] = -0x6c;
      pcVar1 = (char *)(param_1 + 0x1f99);
      pcVar1[0] = '\x18';
      pcVar1[1] = -0x34;
      pcVar1[2] = -0x5f;
      pcVar1[3] = -0x32;
      pcVar1 = (char *)(param_1 + 0x1f9d);
      pcVar1[0] = -0x78;
      pcVar1[1] = 'T';
      pcVar1[2] = -0x6c;
      pcVar1[3] = 'F';
      pcVar1 = (char *)(param_1 + 0x1fa1);
      pcVar1[0] = -0x1f;
      pcVar1[1] = -0x50;
      pcVar1[2] = -0x30;
      pcVar1[3] = 'N';
      pcVar1 = (char *)(param_1 + 0x1fa5);
      pcVar1[0] = -0x4e;
      pcVar1[1] = -9;
      pcVar1[2] = '\x04';
      pcVar1[3] = '\0';
      *(undefined8 *)(param_1 + 0x2170) = 0x1c0;
    }
    *(undefined4 *)(param_1 + 0x21bc) = 1;
  }
  local_68 = param_6;
  local_60 = param_4;
  local_48 = param_5;
  if ((ulong)*(uint *)(param_1 + 0x21b0) != 0xffffffff) {
    if ((int)local_40 != 3) {
      return 0;
    }
    if (*local_38 != (ulong)*(uint *)(param_1 + 0x21b0)) {
      return 0;
    }
LAB_001cba21:
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = *(long *)(param_1 + 0x8c8) - *(long *)(param_1 + 0x928);
      if (0x3fffffff < uVar5) {
        uVar5 = 0x40000000;
      }
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
    if (*local_38 < 0x1000001) {
      if (*(int *)(param_1 + 0x21b4) == 0) {
        *(int *)(param_1 + 0x21b0) = (int)*local_38;
        *(undefined4 *)(param_1 + 0x21b4) = 3;
      }
      else if (1 < *(int *)(param_1 + 0x21b4) - 3U) {
        return 0;
      }
      local_40 = (long *)(param_1 + 0x2190);
      local_58 = param_1 + 0x2188;
      local_50 = (long *)(param_1 + 0x21a0);
      do {
        while( true ) {
          do {
            iVar18 = _InjectFlushOrPushOutput(param_1,param_5,param_6,param_7);
            puVar23 = local_48;
            plVar2 = local_60;
            plVar24 = local_68;
          } while (iVar18 != 0);
          if (*local_40 != 0) {
            return 1;
          }
          if (*(long *)(param_1 + 0x8c8) != *(long *)(param_1 + 0x920)) break;
          param_5 = puVar23;
          if (*(int *)(param_1 + 0x21b4) == 3) {
            *(long **)(param_1 + 0x2188) = local_50;
            uVar22 = *(uint *)(param_1 + 0x21b0);
            bVar21 = *(byte *)(param_1 + 0x982);
            uVar13 = (ulong)bVar21;
            *(undefined2 *)(param_1 + 0x21a0) = *(undefined2 *)(param_1 + 0x980);
            *(undefined2 *)(param_1 + 0x980) = 0;
            *(undefined1 *)(param_1 + 0x982) = 0;
            *(ulong *)(param_1 + 0x21a0 + (ulong)(bVar21 >> 3)) =
                 (ulong)*(byte *)(param_1 + 0x21a0 + (ulong)(bVar21 >> 3));
            uVar4 = uVar13 + 1 >> 3;
            uVar15 = (ulong)(bVar21 + 3 >> 3);
            uVar5 = uVar13 + 4;
            *(ulong *)(param_1 + 0x21a0 + uVar4) =
                 3L << ((byte)(uVar13 + 1) & 7) | (ulong)*(byte *)(param_1 + 0x21a0 + uVar4);
            *(ulong *)(param_1 + 0x21a0 + uVar15) = (ulong)*(byte *)(param_1 + 0x21a0 + uVar15);
            if ((ulong)uVar22 == 1) {
              uVar17 = 0;
LAB_001cbd8a:
              uVar4 = uVar13 + (ulong)uVar17 * 8;
              *(ulong *)((long)local_50 + (uVar5 >> 3)) =
                   (ulong)uVar17 << ((byte)uVar5 & 7) |
                   (ulong)*(byte *)((long)local_50 + (uVar5 >> 3));
              uVar5 = uVar13 + 6 >> 3;
              *(ulong *)((long)local_50 + uVar5) =
                   (ulong)uVar22 - 1 << ((byte)(uVar13 + 6) & 7) |
                   (ulong)*(byte *)((long)local_50 + uVar5);
            }
            else {
              if (uVar22 != 0) {
                uVar17 = 0x1f;
                if (uVar22 - 1 != 0) {
                  for (; uVar22 - 1 >> uVar17 == 0; uVar17 = uVar17 - 1) {
                  }
                }
                uVar17 = (uVar17 ^ 0xffffffe0) + 0x28 >> 3;
                goto LAB_001cbd8a;
              }
              *(ulong *)((long)local_50 + (uVar5 >> 3)) =
                   (ulong)*(byte *)((long)local_50 + (uVar5 >> 3));
              uVar4 = uVar13;
            }
            *(ulong *)(param_1 + 0x2190) = uVar4 + 0xd >> 3;
            *(undefined4 *)(param_1 + 0x21b4) = 4;
          }
          else {
            uVar22 = *(uint *)(param_1 + 0x21b0);
            uVar5 = (ulong)uVar22;
            if (uVar5 == 0) {
              *(undefined8 *)(param_1 + 0x21b0) = 0xffffffff;
              return 1;
            }
            uVar4 = *local_48;
            if (uVar4 == 0) {
              if (0xf < uVar22) {
                uVar22 = 0x10;
              }
              uVar5 = (ulong)uVar22;
              *(long **)(param_1 + 0x2188) = local_50;
              _memcpy(local_50,(void *)*local_60,uVar5);
              *plVar2 = *plVar2 + uVar5;
              *local_38 = *local_38 - uVar5;
              *(int *)(param_1 + 0x21b0) = *(int *)(param_1 + 0x21b0) - uVar22;
              *(ulong *)(param_1 + 0x2190) = uVar5;
              param_6 = local_68;
            }
            else {
              if (uVar5 < uVar4) {
                uVar4 = uVar5;
              }
              _memcpy((void *)*local_68,(void *)*local_60,uVar4);
              *plVar2 = *plVar2 + uVar4;
              *local_38 = *local_38 - uVar4;
              *(int *)(param_1 + 0x21b0) = *(int *)(param_1 + 0x21b0) - (int)uVar4;
              *plVar24 = *plVar24 + uVar4;
              *puVar23 = *puVar23 - uVar4;
              param_6 = plVar24;
            }
          }
        }
        iVar18 = _EncodeData(param_1,0,1,local_40,local_58);
        param_5 = local_48;
      } while (iVar18 != 0);
    }
    return 0;
  }
  if ((int)local_40 == 3) goto LAB_001cba21;
  if (*(int *)(param_1 + 0x21b4) - 3U < 2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x21b4) != 0) && (*local_38 != 0)) {
    return 0;
  }
  if (1 < *(uint *)(param_1 + 4)) {
    local_58 = param_1 + 0x90;
    local_50 = (long *)(param_1 + 0x2190);
    local_80 = param_1 + 0x2188;
LAB_001cbe38:
    do {
      while( true ) {
        uVar4 = *(long *)(param_1 + 0x8c8) - *(long *)(param_1 + 0x928);
        uVar13 = 1L << (*(byte *)(param_1 + 0xc) & 0x3f);
        uVar5 = uVar13 - uVar4;
        if (uVar13 < uVar4) {
          uVar5 = 0;
        }
        uVar13 = (ulong)*(char *)(param_1 + 0x983);
        uVar4 = uVar13;
        if (uVar5 < uVar13) {
          uVar4 = uVar5;
        }
        if ((long)uVar13 < 0) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) || (uVar5 = *local_38, uVar5 == 0)) break;
        if (uVar4 < uVar5) {
          uVar5 = uVar4;
        }
        pvVar20 = (void *)*local_60;
        uVar22 = *(uint *)(param_1 + 0x8e4);
        uVar17 = (uint)uVar5;
        if ((uVar22 == 0) && (uVar5 < *(uint *)(param_1 + 0x8d8))) {
          *(uint *)(param_1 + 0x8e4) = uVar17;
          pvVar7 = (void *)_BrotliAllocate(local_58,(ulong)(uVar17 + 2) + 7);
          if (*(int *)(param_1 + 0xa8) == 0) {
            if (*(void **)(param_1 + 0x8e8) != (void *)0x0) {
              _memcpy(pvVar7,*(void **)(param_1 + 0x8e8),(ulong)(*(int *)(param_1 + 0x8e0) + 2) + 7)
              ;
              _BrotliFree(local_58,*(undefined8 *)(param_1 + 0x8e8));
            }
            *(void **)(param_1 + 0x8e8) = pvVar7;
            *(uint *)(param_1 + 0x8e0) = uVar17;
            *(long *)(param_1 + 0x8f0) = (long)pvVar7 + 2;
            *(undefined1 *)((long)pvVar7 + 1) = 0;
            *(undefined1 *)(*(long *)(param_1 + 0x8f0) + -2) = 0;
            lVar16 = 0;
            do {
              *(undefined1 *)
               (lVar16 + (ulong)*(uint *)(param_1 + 0x8e0) + *(long *)(param_1 + 0x8f0)) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 7);
            if (*(int *)(param_1 + 0xa8) == 0) {
              _memcpy(*(void **)(param_1 + 0x8f0),pvVar20,uVar5);
              goto LAB_001cc184;
            }
          }
        }
        else {
          uVar12 = *(uint *)(param_1 + 0x8dc);
          if (*(uint *)(param_1 + 0x8e0) < uVar12) {
            pvVar7 = (void *)_BrotliAllocate(local_58,(ulong)(uVar12 + 2) + 7);
            if (*(int *)(param_1 + 0xa8) == 0) {
              if (*(void **)(param_1 + 0x8e8) != (void *)0x0) {
                _memcpy(pvVar7,*(void **)(param_1 + 0x8e8),
                        (ulong)(*(int *)(param_1 + 0x8e0) + 2) + 7);
                _BrotliFree(local_58,*(undefined8 *)(param_1 + 0x8e8));
              }
              *(void **)(param_1 + 0x8e8) = pvVar7;
              *(uint *)(param_1 + 0x8e0) = uVar12;
              *(long *)(param_1 + 0x8f0) = (long)pvVar7 + 2;
              *(undefined1 *)((long)pvVar7 + 1) = 0;
              *(undefined1 *)(*(long *)(param_1 + 0x8f0) + -2) = 0;
              lVar16 = 0;
              do {
                *(undefined1 *)
                 (lVar16 + (ulong)*(uint *)(param_1 + 0x8e0) + *(long *)(param_1 + 0x8f0)) = 0;
                lVar16 = lVar16 + 1;
              } while (lVar16 != 7);
              if (*(int *)(param_1 + 0xa8) == 0) {
                *(undefined1 *)(*(long *)(param_1 + 0x8f0) + (ulong)(*(int *)(param_1 + 0x8d0) - 2))
                     = 0;
                *(undefined1 *)(*(long *)(param_1 + 0x8f0) + (ulong)(*(int *)(param_1 + 0x8d0) - 1))
                     = 0;
                *(undefined1 *)(*(long *)(param_1 + 0x8f0) + (ulong)*(uint *)(param_1 + 0x8d0)) =
                     0xf1;
                uVar22 = *(uint *)(param_1 + 0x8e4);
                goto LAB_001cc0f0;
              }
            }
          }
          else {
LAB_001cc0f0:
            uVar22 = uVar22 & *(uint *)(param_1 + 0x8d4);
            uVar13 = (ulong)uVar22;
            uVar4 = (ulong)*(uint *)(param_1 + 0x8d0);
            if (uVar22 < *(uint *)(param_1 + 0x8d8)) {
              uVar15 = *(uint *)(param_1 + 0x8d8) - uVar13;
              if (uVar5 < uVar15) {
                uVar15 = uVar5;
              }
              _memcpy((void *)(uVar4 + *(long *)(param_1 + 0x8f0) + uVar13),pvVar20,uVar15);
              uVar4 = (ulong)*(uint *)(param_1 + 0x8d0);
            }
            pvVar7 = (void *)(*(long *)(param_1 + 0x8f0) + uVar13);
            sVar14 = uVar5;
            if (uVar4 < uVar13 + uVar5) {
              uVar4 = *(uint *)(param_1 + 0x8dc) - uVar13;
              if (uVar5 < uVar4) {
                uVar4 = uVar5;
              }
              _memcpy(pvVar7,pvVar20,uVar4);
              pvVar7 = *(void **)(param_1 + 0x8f0);
              lVar16 = *(uint *)(param_1 + 0x8d0) - uVar13;
              pvVar20 = (void *)((long)pvVar20 + lVar16);
              sVar14 = uVar5 - lVar16;
            }
            _memcpy(pvVar7,pvVar20,sVar14);
            uVar22 = *(uint *)(param_1 + 0x8e4);
            *(undefined1 *)(*(long *)(param_1 + 0x8f0) + -2) =
                 *(undefined1 *)
                  (*(long *)(param_1 + 0x8f0) + (ulong)(*(int *)(param_1 + 0x8d0) - 2));
            *(undefined1 *)(*(long *)(param_1 + 0x8f0) + -1) =
                 *(undefined1 *)
                  (*(long *)(param_1 + 0x8f0) + (ulong)(*(int *)(param_1 + 0x8d0) - 1));
            *(uint *)(param_1 + 0x8e4) =
                 (uVar17 & 0x7fffffff) + (*(uint *)(param_1 + 0x8e4) & 0x7fffffff) |
                 uVar22 & 0x80000000;
LAB_001cc184:
            if (*(int *)(param_1 + 0xa8) == 0) {
              *(long *)(param_1 + 0x8c8) = *(long *)(param_1 + 0x8c8) + uVar5;
              uVar22 = *(uint *)(param_1 + 0x8e4);
              if (uVar22 <= *(uint *)(param_1 + 0x8d4)) {
                lVar16 = *(long *)(param_1 + 0x8f0);
                *(undefined4 *)(lVar16 + 3 + (ulong)uVar22) = 0;
                *(undefined4 *)(lVar16 + (ulong)uVar22) = 0;
              }
            }
          }
        }
        *local_60 = *local_60 + uVar5;
        *local_38 = *local_38 - uVar5;
        param_6 = local_68;
        if ('\0' < *(char *)(param_1 + 0x983)) {
          *(char *)(param_1 + 0x983) = *(char *)(param_1 + 0x983) - (char)uVar5;
        }
      }
      iVar18 = _InjectFlushOrPushOutput(param_1,local_48,param_6,param_7);
      if (iVar18 == 0) {
        if (*local_50 != 0) {
          return 1;
        }
        if (*(int *)(param_1 + 0x21b4) != 0) {
          if (*(int *)(param_1 + 0x21b4) != 1) {
            return 1;
          }
          goto LAB_001cc691;
        }
        iVar18 = (int)local_40;
        if ((iVar18 == 0) && (uVar4 != 0)) {
          return 1;
        }
        uVar5 = *local_38;
        bVar25 = uVar5 == 0;
        bVar10 = iVar18 == 2 && bVar25;
        bVar26 = iVar18 == 1 && bVar25;
        if ((iVar18 != 2 || !bVar25) && (*(char *)(param_1 + 0x983) == '\0')) {
          *(undefined1 *)(param_1 + 0x983) = 0xff;
          bVar26 = true;
        }
        if (*(long *)(param_1 + 0x18) == 0) {
          uVar4 = *(long *)(param_1 + 0x8c8) - *(long *)(param_1 + 0x928);
          uVar13 = uVar4 + uVar5;
          if (0x3fffffff < uVar13) {
            uVar13 = 0x40000000;
          }
          if (0x3fffffff < (uVar4 | uVar5)) {
            uVar13 = 0x40000000;
          }
          *(ulong *)(param_1 + 0x18) = uVar13;
        }
        iVar18 = _EncodeData(param_1,bVar10,bVar26,local_50,local_80);
        if (iVar18 == 0) {
          return 0;
        }
        param_6 = local_68;
        if ((bVar26 | bVar10) == 1) {
          *(uint *)(param_1 + 0x21b4) = bVar10 + 1;
        }
        goto LAB_001cbe38;
      }
    } while (*(char *)(param_1 + 0x983) != -1);
    if (*(int *)(param_1 + 0x21b4) != 0) {
      if ((*(int *)(param_1 + 0x21b4) != 1) || (*local_50 != 0)) goto LAB_001cbe38;
      *(undefined4 *)(param_1 + 0x21b4) = 0;
      *(undefined8 *)(param_1 + 0x2188) = 0;
    }
    *(undefined1 *)(param_1 + 0x983) = 0xfe;
    goto LAB_001cbe38;
  }
  local_50 = (long *)(1L << (*(byte *)(param_1 + 8) & 0x3f));
  uVar5 = *local_38;
  uVar4 = (ulong)local_50;
  if (uVar5 < local_50) {
    uVar4 = uVar5;
  }
  uVar13 = 0x20000;
  if (uVar4 < 0x20000) {
    uVar13 = uVar4;
  }
  lVar16 = param_1 + 0x90;
  local_70 = lVar16;
  if (*(uint *)(param_1 + 4) == 1) {
    local_78 = *(long *)(param_1 + 0x2178);
    if ((local_78 == 0) && (0x1ffff < uVar4)) {
      uVar6 = _BrotliAllocate(lVar16,0x80000);
      *(undefined8 *)(param_1 + 0x2178) = uVar6;
      local_c8 = _BrotliAllocate();
      *(undefined8 *)(param_1 + 0x2180) = local_c8;
      if (*(int *)(param_1 + 0xa8) != 0) {
        return 0;
      }
      local_78 = *(long *)(param_1 + 0x2178);
      if (local_78 != 0) goto LAB_001cc3a9;
LAB_001cc6b0:
      local_78 = _BrotliAllocate(lVar16,uVar13 * 4);
      local_c8 = _BrotliAllocate(lVar16,uVar13);
    }
    else {
      if (local_78 != 0) {
        local_c8 = *(undefined8 *)(param_1 + 0x2180);
        goto LAB_001cc3a9;
      }
      if (uVar5 != 0) goto LAB_001cc6b0;
      local_78 = 0;
      local_c8 = 0;
    }
    iVar18 = (int)local_40;
    local_a0 = local_c8;
    local_98 = local_78;
    if (*(int *)(param_1 + 0xa8) != 0) {
      return 0;
    }
  }
  else {
    local_c8 = 0;
    local_78 = 0;
LAB_001cc3a9:
    local_98 = 0;
    local_a0 = 0;
    iVar18 = (int)local_40;
  }
  local_c0 = param_1 + 0x1df0;
  local_b8 = param_1 + 0x1e70;
  local_b0 = param_1 + 0x2170;
  local_a8 = param_1 + 0x1f70;
  local_8c = iVar18 - 1;
  local_90 = (iVar18 == 2) + 1;
  puVar23 = local_48;
LAB_001cc416:
  do {
    iVar18 = _InjectFlushOrPushOutput(param_1,puVar23,param_6,param_7);
    lVar16 = local_70;
  } while (iVar18 != 0);
  if ((*(long *)(param_1 + 0x2190) == 0) && (*(int *)(param_1 + 0x21b4) == 0)) {
    uVar5 = *local_38;
    if ((int)local_40 != 0 || uVar5 != 0) {
      bVar26 = (int)local_40 == 2;
      plVar24 = (long *)uVar5;
      if (uVar5 > local_50) {
        plVar24 = local_50;
      }
      local_88 = (ulong)*(byte *)(param_1 + 0x982);
      iVar18 = 1;
      if ((int)local_40 != 1 || uVar5 != 0) goto code_r0x001cc4a3;
      goto LAB_001cc63b;
    }
  }
  _BrotliFree(local_70,local_98);
  _BrotliFree(lVar16,local_a0);
  if (*(int *)(param_1 + 0x21b4) != 1) {
    return 1;
  }
  if (*(long *)(param_1 + 0x2190) != 0) {
    return 1;
  }
LAB_001cc691:
  *(undefined4 *)(param_1 + 0x21b4) = 0;
  *(undefined8 *)(param_1 + 0x2188) = 0;
  return 1;
code_r0x001cc4a3:
  local_58 = CONCAT71(local_58._1_7_,uVar5 <= local_50);
  local_80 = (long)plVar24 * 2 + 0x1f7;
  local_d0 = *puVar23;
  if (local_d0 < local_80) {
    puVar8 = (undefined1 *)_GetBrotliStorage(param_1);
    if (*(int *)(param_1 + 0xa8) != 0) {
      return 0;
    }
  }
  else {
    puVar8 = (undefined1 *)*local_68;
  }
  *puVar8 = *(undefined1 *)(param_1 + 0x980);
  puVar8[1] = *(undefined1 *)(param_1 + 0x981);
  uVar6 = _GetHashTable(param_1,*(undefined4 *)(param_1 + 4),plVar24,&local_d8);
  if (*(int *)(param_1 + 0xa8) != 0) {
    return 0;
  }
  bVar21 = bVar26 & (byte)local_58;
  if (*(int *)(param_1 + 4) == 0) {
    _BrotliCompressFragmentFast
              (local_70,*local_60,plVar24,bVar21,uVar6,local_d8,local_c0,local_b8,local_b0,local_a8,
               &local_88,puVar8);
  }
  else {
    _BrotliCompressFragmentTwoPass
              (local_70,*local_60,plVar24,bVar21,local_78,local_c8,uVar6,local_d8,&local_88,puVar8);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    return 0;
  }
  if (uVar5 != 0) {
    *local_60 = *local_60 + (long)plVar24;
    *local_38 = *local_38 - (long)plVar24;
  }
  uVar4 = local_88 >> 3;
  if (local_d0 < local_80) {
    *(undefined1 **)(param_1 + 0x2188) = puVar8;
    *(ulong *)(param_1 + 0x2190) = uVar4;
  }
  else {
    *local_68 = *local_68 + uVar4;
    *local_48 = *local_48 - uVar4;
    lVar16 = *(long *)(param_1 + 0x2198) + uVar4;
    *(long *)(param_1 + 0x2198) = lVar16;
    if (param_7 != (long *)0x0) {
      *param_7 = lVar16;
    }
  }
  *(ushort *)(param_1 + 0x980) = (ushort)(byte)puVar8[uVar4];
  *(byte *)(param_1 + 0x982) = (byte)local_88 & 7;
  puVar23 = local_48;
  param_6 = local_68;
  iVar18 = local_90;
  if (local_8c < 2 && uVar5 <= local_50) {
LAB_001cc63b:
    *(int *)(param_1 + 0x21b4) = iVar18;
    param_6 = local_68;
  }
  goto LAB_001cc416;
}

