// rea decompile_all
// name: _lz24_encode_buffer
// address: 0x1d8f5d
// body: available
// range: 0x1d8f5d-0x1d9694 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lz24_encode_buffer(int *param_1,ulong param_2,void *param_3,ulong param_4,void *param_5,
                        int param_6)

{
  void *pvVar1;
  void *pvVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  size_t sVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  size_t sVar25;
  long lVar26;
  byte bVar27;
  uint uVar28;
  ulong uVar29;
  size_t sVar30;
  int iVar31;
  ulong uVar32;
  undefined1 uVar33;
  int iVar34;
  undefined8 uVar35;
  int *piVar36;
  void *pvVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  bool bVar42;
  bool bVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int local_60;
  undefined4 local_40;
  undefined1 local_3c;
  
  if (((param_6 - 0x20U < 0xffffffe1 || param_4 >> 0x20 != 0) || ((long)param_2 < 0)) ||
     (param_2 < 4)) {
LAB_001d8f97:
    lVar26 = 0;
  }
  else {
    iVar40 = (int)param_4;
    *param_1 = iVar40;
    piVar36 = param_1 + 1;
    if (param_4 != 0) {
      pvVar1 = (void *)((long)param_5 + 0x341f0);
      pvVar2 = (void *)((long)param_5 + 0x24000);
      sVar25 = param_4 & 0xffffffff;
      pvVar37 = param_3;
      do {
        sVar19 = 0x1000;
        if ((uint)sVar25 < 0x1000) {
          sVar19 = sVar25;
        }
        uVar23 = *(uint *)((long)param_5 + 0x443e4);
        if ((0x7f < uVar23) || ((*(uint *)((long)param_5 + 0x443e8) ^ uVar23) != 0xe11cca)) {
          *(undefined4 *)((long)param_5 + 0x443e4) = 0;
          uVar23 = 0;
        }
        uVar32 = (long)pvVar37 - (long)param_3;
        if ((uVar32 & 0x7fffffff) == 0) {
          _memset(param_5,(uint)(byte)((char)(uVar32 >> 0x18) - 2),0x10000);
        }
        uVar24 = (uint)sVar19;
        uVar15 = uVar24 + (uint)uVar32;
        if ((uint)uVar32 < uVar15) {
          uVar32 = uVar32 & 0xffffffff;
          local_60 = (int)pvVar37;
          uVar38 = (iVar40 + (int)param_3) - local_60;
          do {
            uVar17 = (uint)uVar32;
            uVar20 = (ulong)(uVar17 & 0xfff);
            *(undefined2 *)((long)param_5 + (ulong)(uVar17 & 0xfff) * 4 + 0x20000) = 0;
            uVar16 = iVar40 - uVar17;
            if (3 < uVar16) {
              uVar39 = *(uint *)((long)param_5 +
                                (ulong)((uint)(*(int *)((long)param_3 + uVar32) * -0x61c8864f) >>
                                       0x12) * 4);
              uVar41 = uVar17 - uVar39;
              if (uVar41 < 0x4000) {
                iVar31 = 0x40;
                uVar18 = 0;
LAB_001d9125:
                bVar43 = iVar31 != 0;
                iVar31 = iVar31 + -1;
                if (bVar43) {
                  uVar21 = 0;
                  bVar43 = true;
                  do {
                    bVar42 = bVar43;
                    if ((ulong)uVar16 < uVar21 + 0x10) {
                      uVar29 = (ulong)uVar38;
                      if (uVar38 < uVar21) {
                        uVar29 = uVar21;
                      }
                      goto LAB_001d9184;
                    }
                    auVar44 = *(undefined1 (*) [16])((long)param_3 + uVar21 + uVar39) ^
                              *(undefined1 (*) [16])((long)param_3 + uVar21 + uVar32);
                    auVar45._0_4_ = -(uint)(auVar44._0_4_ == 0);
                    auVar45._4_4_ = -(uint)(auVar44._4_4_ == 0);
                    auVar45._8_4_ = -(uint)(auVar44._8_4_ == 0);
                    auVar45._12_4_ = -(uint)(auVar44._12_4_ == 0);
                    iVar34 = movmskps((int)(uVar21 + 0x10),auVar45);
                    if (iVar34 != 0xf) {
                      uVar29 = auVar44._0_8_;
                      if (uVar29 == 0) {
                        uVar29 = 0;
                        if (auVar44._8_8_ != 0) {
                          for (; (auVar44._8_8_ >> uVar29 & 1) == 0; uVar29 = uVar29 + 1) {
                          }
                        }
                        uVar28 = (uint)(uVar29 >> 3) & 0x1fffffff | 8;
                      }
                      else {
                        uVar13 = 0;
                        if (uVar29 != 0) {
                          for (; (uVar29 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
                          }
                        }
                        uVar28 = (uint)(uVar13 >> 3) & 0x1fffffff;
                      }
                      uVar21 = (ulong)((int)uVar21 + uVar28);
                      goto LAB_001d91d7;
                    }
                    uVar21 = 0x10;
                    bVar43 = false;
                  } while (bVar42);
                  goto LAB_001d91a7;
                }
                goto LAB_001d9230;
              }
              uVar18 = 0;
LAB_001d9230:
              if (uVar15 - uVar17 < (uVar18 & 0xffff)) {
                *(short *)((long)param_5 + uVar20 * 4 + 0x20000) = (short)(uVar15 - uVar17);
              }
              if (0x1e < uVar32) {
                uVar17 = uVar17 - 0x1f;
                uVar20 = (ulong)((uint)(*(int *)((long)param_3 + (ulong)uVar17) * -0x61c8864f) >>
                                0x12);
                *(undefined4 *)((long)param_5 + (ulong)(uVar17 & 0x3fff) * 4 + 0x10000) =
                     *(undefined4 *)((long)param_5 + uVar20 * 4);
                *(uint *)((long)param_5 + uVar20 * 4) = uVar17;
              }
            }
            uVar32 = uVar32 + 1;
            uVar38 = uVar38 - 1;
          } while (uVar32 != uVar15);
        }
        uVar15 = 0x80;
        uVar38 = 0;
LAB_001d92de:
        if (uVar38 < uVar15) {
          _memset(pvVar1,0xff,(ulong)(uVar24 * 0x10 + 0x1f0));
          *(undefined8 *)((long)param_5 + 0x341f0) = 0x8000000000000000;
          *(undefined2 *)((long)param_5 + 0x341f8) = 0x1f00;
          uVar16 = 0;
          sVar30 = 0;
          while( true ) {
            puVar3 = (uint *)(sVar30 * 0x10 + (long)pvVar1);
            uVar17 = *(uint *)((long)param_5 + sVar30 * 0x10 + 0x341f4);
            if (uVar17 < uVar16) {
              *puVar3 = uVar17;
              *(undefined1 *)(puVar3 + 2) = *(undefined1 *)((long)puVar3 + 9);
              *(undefined1 *)((long)puVar3 + 10) = 0;
              *(undefined2 *)(puVar3 + 3) = 0;
              uVar16 = uVar17;
            }
            if (sVar30 == sVar19) break;
            cVar5 = *(char *)((long)puVar3 + 9);
            if ((cVar5 != '\x1f') && (uVar17 + 4 < puVar3[5])) {
              puVar3[5] = uVar17 + 4;
              *(char *)((long)puVar3 + 0x19) = cVar5 + '\x01';
            }
            uVar39 = uVar23 + 0x88 + uVar16;
            uVar41 = 0x1f;
            do {
              uVar32 = (ulong)uVar41;
              if (puVar3[uVar32 * 4 + 1] <= uVar39) break;
              puVar3[uVar32 * 4 + 1] = uVar39;
              *(char *)((long)puVar3 + uVar32 * 0x10 + 9) = (char)uVar41;
              uVar39 = uVar39 - 4;
              uVar41 = uVar41 - 1;
            } while (uVar41 != 0);
            uVar17 = uVar17 + uVar23;
            uVar10 = *(ushort *)((long)param_5 + sVar30 * 4 + 0x20000);
            puVar4 = puVar3 + (ulong)uVar10 * 4;
            uVar39 = puVar3[(ulong)uVar10 * 4];
            if (uVar17 < puVar3[(ulong)uVar10 * 4]) {
              *puVar4 = uVar17;
              *(char *)(puVar4 + 2) = cVar5;
              *(char *)((long)puVar4 + 10) = (char)uVar10;
              *(undefined2 *)(puVar4 + 3) = *(undefined2 *)((long)param_5 + sVar30 * 4 + 0x20002);
              uVar16 = *puVar3;
              uVar39 = uVar17;
            }
            uVar16 = uVar16 + uVar23 + 0xc;
            if (uVar16 < uVar39) {
              *puVar4 = uVar16;
              *(undefined1 *)(puVar4 + 2) = 0;
              *(char *)((long)puVar4 + 10) = (char)uVar10;
              *(undefined2 *)(puVar4 + 3) = *(undefined2 *)((long)param_5 + sVar30 * 4 + 0x20002);
            }
            sVar30 = sVar30 + 1;
            uVar16 = *(uint *)((long)pvVar1 + sVar30 * 0x10);
          }
          uVar16 = 0;
          iVar31 = 0;
          sVar30 = sVar19;
          do {
            if (0x1000 < (uint)sVar30) goto LAB_001d9693;
            uVar17 = (uint)*(byte *)((long)param_5 + sVar30 * 0x10 + 0x341f8);
            iVar31 = iVar31 + uVar17 + 3;
            uVar16 = uVar16 + param_6;
            uVar17 = (uint)sVar30 - (*(byte *)((long)param_5 + sVar30 * 0x10 + 0x341fa) + uVar17);
            sVar30 = (size_t)uVar17;
          } while (uVar17 != 0);
          if (param_6 + -1 + uVar24 < uVar16) goto code_r0x001d945c;
          _memcpy(pvVar2,pvVar1,(ulong)(uVar24 * 0x10 + 0x10));
          *(int *)((long)param_5 + 0x443e0) = iVar31;
          uVar15 = uVar23;
          goto LAB_001d94b3;
        }
        *(uint *)((long)param_5 + 0x443e4) = uVar38;
        *(uint *)((long)param_5 + 0x443e8) = uVar38 ^ 0xe11cca;
        if (uVar38 == 0x80) {
LAB_001d9693:
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        lVar26 = (long)param_1 + (param_2 - (long)piVar36);
        if (*(uint *)((long)param_5 + 0x443e0) < uVar24 + 2) {
          if (lVar26 < (long)((ulong)*(uint *)((long)param_5 + 0x443e0) + 1)) goto LAB_001d8f97;
          lVar26 = sVar19 * 0x10;
          sVar30 = sVar19;
          uVar35 = *(undefined8 *)((long)pvVar2 + lVar26);
          bVar22 = *(byte *)((long)param_5 + lVar26 + 0x24008);
          uVar33 = *(undefined1 *)((long)param_5 + lVar26 + 0x24009);
          local_40 = *(undefined4 *)((long)param_5 + lVar26 + 0x2400b);
          local_3c = *(undefined1 *)((long)param_5 + lVar26 + 0x2400f);
          bVar27 = *(byte *)((long)param_5 + lVar26 + 0x2400a);
          do {
            uVar23 = ((int)sVar30 - (uint)bVar22) - (uint)bVar27;
            sVar30 = (size_t)uVar23;
            lVar26 = sVar30 * 0x10;
            uVar12 = *(undefined8 *)((long)pvVar2 + lVar26);
            bVar6 = *(byte *)((long)param_5 + lVar26 + 0x24008);
            uVar7 = *(undefined1 *)((long)param_5 + lVar26 + 0x24009);
            bVar8 = *(byte *)((long)param_5 + lVar26 + 0x2400a);
            uVar9 = *(undefined1 *)((long)param_5 + lVar26 + 0x2400f);
            uVar11 = *(undefined4 *)((long)param_5 + lVar26 + 0x2400b);
            *(undefined8 *)((long)pvVar2 + lVar26) = uVar35;
            *(byte *)((long)param_5 + lVar26 + 0x24008) = bVar22;
            *(undefined1 *)((long)param_5 + lVar26 + 0x24009) = uVar33;
            *(byte *)((long)param_5 + lVar26 + 0x2400a) = bVar27;
            *(undefined1 *)((long)param_5 + lVar26 + 0x2400f) = local_3c;
            *(undefined4 *)((long)param_5 + lVar26 + 0x2400b) = local_40;
            uVar35 = uVar12;
            bVar22 = bVar6;
            uVar33 = uVar7;
            local_40 = uVar11;
            local_3c = uVar9;
            bVar27 = bVar8;
          } while (uVar23 != 0);
          uVar32 = 0;
          do {
            lVar26 = uVar32 * 0x10;
            bVar22 = *(byte *)((long)param_5 + lVar26 + 0x24008);
            *piVar36 = (uint)*(ushort *)((long)param_5 + lVar26 + 0x2400c) * 0x400 +
                       (uint)*(byte *)((long)param_5 + lVar26 + 0x2400a) * 0x20 + (uint)bVar22;
            _memcpy((void *)((long)piVar36 + 3),(void *)(uVar32 + (long)pvVar37),(ulong)bVar22);
            bVar22 = *(byte *)((long)param_5 + lVar26 + 0x24008);
            piVar36 = (int *)((long)piVar36 + (ulong)bVar22 + 3);
            uVar23 = (uint)*(byte *)((long)param_5 + lVar26 + 0x2400a) + (uint)bVar22 + (int)uVar32;
            uVar32 = (ulong)uVar23;
          } while (uVar23 < uVar24);
        }
        else {
          if (lVar26 < (long)(ulong)(uVar24 + 2)) goto LAB_001d8f97;
          *(undefined2 *)piVar36 = 0;
          _memcpy((undefined2 *)((long)piVar36 + 2),pvVar37,sVar19);
          piVar36 = (int *)((long)piVar36 + sVar19 + 2);
        }
        pvVar37 = (void *)((long)pvVar37 + sVar19);
        uVar24 = (uint)sVar25 - uVar24;
        sVar25 = (size_t)uVar24;
      } while (uVar24 != 0);
    }
    lVar26 = (long)piVar36 - (long)param_1;
  }
  return lVar26;
  while( true ) {
    if (*(char *)((long)param_3 + (ulong)(uVar17 + (int)uVar21)) !=
        *(char *)((long)param_3 + (ulong)(uVar39 + (int)uVar21))) goto LAB_001d91d7;
    uVar21 = uVar21 + 1;
    if (uVar21 == 0x1f) break;
LAB_001d9184:
    uVar28 = (uint)uVar29;
    if (uVar16 <= uVar21) goto LAB_001d91d9;
  }
LAB_001d91a7:
  uVar28 = 0x1f;
LAB_001d91d9:
  if ((uVar18 & 0xffff) < uVar28) {
    *(short *)((long)param_5 + uVar20 * 4 + 0x20000) = (short)uVar28;
    *(short *)((long)param_5 + uVar20 * 4 + 0x20002) = (short)uVar41;
    uVar18 = uVar28;
    if (uVar28 == 0x1f) {
      uVar18 = 0x1f;
      goto LAB_001d9230;
    }
  }
  uVar39 = *(uint *)((long)param_5 + (ulong)(uVar39 & 0x3fff) * 4 + 0x10000);
  uVar41 = uVar17 - uVar39;
  if (0x3fff < uVar41) goto LAB_001d9230;
  goto LAB_001d9125;
LAB_001d91d7:
  uVar28 = (uint)uVar21;
  goto LAB_001d91d9;
code_r0x001d945c:
  uVar38 = uVar23 + 1;
  if ((uVar23 != *(uint *)((long)param_5 + 0x443e4)) ||
     (iVar31 = uVar23 * 4, uVar23 = uVar23 * 2 + 1, uVar38 + uVar15 <= iVar31 + 2U)) {
LAB_001d94b3:
    uVar23 = uVar15 + uVar38 >> 1;
  }
  goto LAB_001d92de;
}

