// rea decompile_all
// name: _lzfseEncodeBase
// address: 0x201032
// body: available
// range: 0x201032-0x2013f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseEncodeBase(long *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 (*pauVar5) [16];
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong in_R8;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined1 auVar23 [16];
  long local_d8;
  long lStack_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  long local_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_50;
  undefined1 (*local_48) [16];
  long local_40;
  int local_34;
  
  lVar10 = param_1[3];
  if (lVar10 < param_1[4]) {
    local_48 = (undefined1 (*) [16])(param_1 + 10);
    do {
      pauVar5 = local_48;
      lVar1 = *param_1;
      uVar12 = param_1[2];
      iVar8 = *(int *)(lVar1 + lVar10);
      lVar13 = param_1[0xe];
      local_40 = (ulong)((uint)(iVar8 * -0x61c8864f) >> (-(char)param_1[8] & 0x1fU)) * 0x20;
      local_78 = *(undefined1 (*) [16])(lVar13 + local_40);
      local_68 = *(undefined1 (*) [16])(lVar13 + 0x10 + local_40);
      iVar16 = (int)lVar10;
      if ((long)uVar12 <= lVar10) {
        local_a0 = lVar10 - uVar12;
        local_98 = uVar12;
        auVar22._0_4_ = -(uint)(local_78._0_4_ + 0x3fffb < iVar16);
        auVar22._4_4_ = -(uint)(local_78._4_4_ + 0x3fffb < iVar16);
        auVar22._8_4_ = -(uint)(local_78._8_4_ + 0x3fffb < iVar16);
        auVar22._12_4_ = -(uint)(local_78._12_4_ + 0x3fffb < iVar16);
        auVar20._0_4_ = -(uint)(iVar8 == local_68._0_4_);
        auVar20._4_4_ = -(uint)(iVar8 == local_68._4_4_);
        auVar20._8_4_ = -(uint)(iVar8 == local_68._8_4_);
        auVar20._12_4_ = -(uint)(iVar8 == local_68._12_4_);
        in_XMM1 = ~auVar22 & auVar20;
        uVar11 = movmskps((int)in_R8,in_XMM1);
        in_R8 = (ulong)uVar11;
        if (uVar11 != 0) {
          local_34 = iVar8;
          local_50 = lVar13;
          uVar15 = 0;
          local_80 = 0;
          lStack_88 = 0;
          do {
            if ((uVar11 >> (uVar15 & 0x1f) & 1) != 0) {
              local_b8 = local_78;
              uVar6 = ((int)param_1[1] - iVar16) - 8;
              uVar19 = 4;
              uVar18 = 4;
              if (4 < uVar6) {
LAB_0020112b:
                uVar2 = *(ulong *)(lVar1 + *(int *)(local_b8 + (ulong)(uVar15 & 3) * 4) + uVar19);
                uVar17 = *(ulong *)(lVar1 + lVar10 + uVar19);
                if (uVar2 == uVar17) goto code_r0x0020113b;
                uVar17 = uVar17 ^ uVar2;
                uVar2 = 0;
                if (uVar17 != 0) {
                  for (; (uVar17 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                  }
                }
                uVar18 = ((uint)(uVar2 >> 3) & 0x1fffffff) + (int)uVar19;
              }
LAB_00201156:
              if (local_80 < uVar18) {
                lStack_88 = (long)*(int *)(local_b8 + (ulong)(uVar15 & 3) * 4);
                local_80 = uVar18;
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 4);
          if (local_80 != 0) {
            if (0x3997b < local_80) {
              local_80 = 0x3997c;
            }
            lVar9 = lStack_88;
            if (((long)uVar12 < lVar10) && (0 < lStack_88)) {
              while (lVar9 = lStack_88,
                    *(char *)(lVar1 + -1 + lStack_88) == *(char *)(lVar1 + -1 + lVar10)) {
                lVar10 = lVar10 + -1;
                lVar9 = lStack_88 + -1;
                if ((lVar10 <= (long)uVar12) || (bVar3 = lStack_88 < 2, lStack_88 = lVar9, bVar3))
                break;
              }
            }
            local_90 = lVar10;
            lStack_88 = lVar9;
            local_80 = local_80 + (iVar16 - (int)lVar10);
            if (local_80 < 0x28) {
              uVar11 = *(uint *)(param_1 + 0xc);
              if ((ulong)uVar11 == 0) {
                *(ulong *)local_48[1] = CONCAT44(uStack_7c,local_80);
                *(long *)*local_48 = lVar10;
                *(long *)(*local_48 + 8) = lVar9;
                in_R8 = uVar12;
              }
              else if (lVar10 < (long)(*(long *)*local_48 + (ulong)uVar11)) {
                if (uVar11 < local_80) {
                  iVar8 = _lzfseBackendMatch(param_1,&local_90);
                  in_XMM1._8_8_ = extraout_XMM1_Qb_02;
                  in_XMM1._0_8_ = extraout_XMM1_Qa_02;
                  pauVar5 = local_48;
                }
                else {
                  iVar8 = _lzfseBackendMatch(param_1,local_48);
                  in_XMM1._8_8_ = extraout_XMM1_Qb_04;
                  in_XMM1._0_8_ = extraout_XMM1_Qa_04;
                }
                if (iVar8 != 0) {
                  return 0xfffffffe;
                }
                *pauVar5 = (undefined1  [16])0x0;
                *(undefined8 *)pauVar5[1] = 0;
                in_R8 = uVar12;
                lVar13 = local_50;
                iVar8 = local_34;
              }
              else {
                iVar8 = _lzfseBackendMatch(param_1,local_48);
                in_XMM1._8_8_ = extraout_XMM1_Qb_03;
                in_XMM1._0_8_ = extraout_XMM1_Qa_03;
                if (iVar8 != 0) {
                  return 0xfffffffe;
                }
                *(ulong *)pauVar5[1] = CONCAT44(uStack_7c,local_80);
                *(long *)*pauVar5 = local_90;
                *(long *)(*pauVar5 + 8) = lStack_88;
                in_R8 = uVar12;
                lVar13 = local_50;
                iVar8 = local_34;
              }
            }
            else {
              iVar8 = _lzfseBackendMatch(param_1,&local_90);
              in_XMM1._8_8_ = extraout_XMM1_Qb_01;
              in_XMM1._0_8_ = extraout_XMM1_Qa_01;
              if (iVar8 != 0) {
                return 0xfffffffe;
              }
              *local_48 = (undefined1  [16])0x0;
              *(undefined8 *)local_48[1] = 0;
              in_R8 = uVar12;
              lVar13 = local_50;
              iVar8 = local_34;
            }
            goto LAB_002013a1;
          }
        }
        if (0x3b1 < (long)(lVar10 - uVar12)) {
          if ((int)param_1[0xc] == 0) {
            auVar21._8_4_ = (int)uVar12;
            auVar21._0_8_ = uVar12;
            auVar21._12_4_ = (int)(uVar12 >> 0x20);
            local_d8 = uVar12 + 0x13b;
            lStack_d0 = auVar21._8_8_ + 0x13a;
            local_c8 = 0;
            iVar7 = _lzfseBackendMatch(param_1,&local_d8);
            in_XMM1._8_8_ = extraout_XMM1_Qb_00;
            in_XMM1._0_8_ = extraout_XMM1_Qa_00;
            if (iVar7 != 0) {
              return 0xfffffffe;
            }
          }
          else {
            iVar7 = _lzfseBackendMatch(param_1,local_48);
            in_XMM1._8_8_ = extraout_XMM1_Qb;
            in_XMM1._0_8_ = extraout_XMM1_Qa;
            if (iVar7 != 0) {
              return 0xfffffffe;
            }
            *pauVar5 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar5[1] = 0;
          }
        }
      }
LAB_002013a1:
      piVar14 = (int *)(lVar13 + local_40);
      auVar4._4_8_ = in_XMM1._8_8_;
      auVar4._0_4_ = local_68._0_4_;
      auVar23._0_8_ = auVar4._0_8_ << 0x20;
      auVar23._8_4_ = local_68._4_4_;
      auVar23._12_4_ = local_68._8_4_;
      in_XMM1._4_12_ = auVar23._4_12_;
      in_XMM1._0_4_ = iVar8;
      *piVar14 = iVar16;
      piVar14[1] = local_78._0_4_;
      piVar14[2] = local_78._4_4_;
      piVar14[3] = local_78._8_4_;
      *(undefined1 (*) [16])(piVar14 + 4) = in_XMM1;
      lVar10 = param_1[3] + 1;
      param_1[3] = lVar10;
    } while (lVar10 < param_1[4]);
  }
  return 0;
code_r0x0020113b:
  uVar18 = (int)uVar19 + 8;
  uVar19 = (ulong)uVar18;
  if (uVar6 <= uVar18) goto LAB_00201156;
  goto LAB_0020112b;
}

