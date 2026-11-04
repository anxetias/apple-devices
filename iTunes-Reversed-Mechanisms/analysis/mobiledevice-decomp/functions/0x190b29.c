// rea decompile_all
// name: _PCompressFilter
// address: 0x190b29
// body: available
// range: 0x190b29-0x19169b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x191697 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _PCompressFilter(undefined1 (*param_1) [16],undefined1 (*param_2) [16],
                    undefined1 (*param_3) [16])

{
  size_t sVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  int *piVar11;
  long lVar12;
  FILE *pFVar13;
  FILE *pFVar14;
  undefined8 uVar15;
  char *pcVar16;
  FILE *pFVar17;
  long lVar18;
  ulong uVar19;
  FILE *pFVar20;
  undefined1 (*pauVar21) [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  long *plStack_80;
  undefined8 local_78;
  FILE *local_68;
  undefined1 (*local_60) [16];
  FILE *local_58;
  int local_4c;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _enterThreadErrorContext();
  local_88 = (undefined1  [8])0x0;
  plStack_80 = (long *)0x0;
  local_98 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_78 = 0;
  iVar5 = *(int *)(*param_1 + 8);
  if (iVar5 == 0) {
    iVar5 = _getDefaultNThreads();
  }
  *(int *)(*param_1 + 8) = iVar5;
  if (*(int *)(*param_1 + 4) == 1) {
    iVar5 = _pcRead(*(undefined8 *)*param_2,*(undefined8 *)param_2[1],&local_4c,4);
    if (iVar5 == 4) {
      if (param_3 != (undefined1 (*) [16])0x0) {
        *(long *)*param_3 = *(long *)*param_3 + 4;
      }
      iVar5 = 0;
      do {
        iVar6 = _getHeader(iVar5,&local_48);
        if ((iVar6 == 0) && (local_4c == (int)local_48)) {
          local_48 = 0;
          iVar6 = _pcRead(*(undefined8 *)*param_2,*(undefined8 *)param_2[1],&local_48,8);
          if (iVar6 != 8) goto LAB_00190e08;
          if (param_3 != (undefined1 (*) [16])0x0) {
            *(long *)*param_3 = *(long *)*param_3 + 8;
          }
          if (local_48 != 0) {
            uVar19 = local_48 >> 0x38 | (local_48 & 0xff000000000000) >> 0x28 |
                     (local_48 & 0xff0000000000) >> 0x18 | (local_48 & 0xff00000000) >> 8 |
                     (local_48 & 0xff000000) << 8 | (local_48 & 0xff0000) << 0x18 |
                     (local_48 & 0xff00) << 0x28 | local_48 << 0x38;
            *(ulong *)param_1[1] = uVar19;
            *(int *)*param_1 = iVar5;
            if (0 < *(int *)(param_1[1] + 8)) {
              local_58 = *(FILE **)PTR____stderrp_004412c0;
              uVar15 = _PCompressGetDecoderDescription(iVar5);
              _fprintf(local_58,"Decoder: %s\n",uVar15);
              _fprintf(*(FILE **)PTR____stderrp_004412c0,"Blocksize: %llu\n",uVar19);
            }
            goto LAB_00190d7f;
          }
          pcVar16 = "invalid blockSize in input stream";
          uVar15 = 0xbf;
          goto LAB_00190df9;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 7);
      iVar5 = _compression_stream_identify_algorithm(&local_4c);
      if (iVar5 == -1) {
        pcVar16 = "invalid header in input stream";
        uVar15 = 0xb3;
      }
      else {
        pcVar16 = "compressed stream detected : try compression_tool";
        uVar15 = 0xb2;
      }
LAB_00190df9:
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                    ,"processFileHeader",uVar15,0x25,0,pcVar16);
    }
LAB_00190e08:
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                  ,"PCompressFilter",0x1fb,0x25,0,"processFileHeader");
  }
  else {
    uVar19 = *(ulong *)param_1[1];
    uVar7 = _PCompressGetEncoderDecoder(*(undefined4 *)*param_1);
    iVar5 = _getHeader(uVar7,&local_4c);
    if ((iVar5 != 0) ||
       (iVar5 = _pcWrite(*(undefined8 *)(param_2[1] + 8),*(undefined8 *)(param_2[2] + 8),&local_4c,4
                        ), iVar5 != 4)) goto LAB_00190e08;
    if (param_3 != (undefined1 (*) [16])0x0) {
      *(long *)(*param_3 + 8) = *(long *)(*param_3 + 8) + 4;
    }
    local_48 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
               (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
               (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28
               | uVar19 << 0x38;
    iVar5 = _pcWrite(*(undefined8 *)(param_2[1] + 8),*(undefined8 *)(param_2[2] + 8),&local_48,8);
    if (iVar5 != 8) goto LAB_00190e08;
    if (param_3 != (undefined1 (*) [16])0x0) {
      *(long *)(*param_3 + 8) = *(long *)(*param_3 + 8) + 8;
    }
    if (0 < *(int *)(param_1[1] + 8)) {
      pFVar13 = *(FILE **)PTR____stderrp_004412c0;
      uVar15 = _PCompressGetEncoderDescription(*(undefined4 *)*param_1);
      _fprintf(pFVar13,"Encoder: %s\n",uVar15);
    }
LAB_00190d7f:
    local_e8 = *param_1;
    local_d8 = param_1[1];
    local_98 = ZEXT816(0);
    _local_88 = ZEXT816(0);
    local_78 = 0;
    local_c8 = *param_2;
    local_b8 = param_2[1];
    local_a8 = param_2[2];
    if (param_3 != (undefined1 (*) [16])0x0) {
      local_98 = *param_3;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      uVar15 = _PCompressGetEncoderFilter(*(undefined4 *)*param_1);
      auVar24._8_8_ = extraout_XMM1_Qb_00;
      auVar24._0_8_ = extraout_XMM1_Qa_00;
    }
    else {
      uVar15 = _PCompressGetDecoderFilter();
      auVar24._8_8_ = extraout_XMM1_Qb;
      auVar24._0_8_ = extraout_XMM1_Qa;
    }
    local_88 = (undefined1  [8])uVar15;
    local_60 = param_3;
    plVar8 = _calloc((long)*(int *)(*param_1 + 8),0x48);
    plStack_80 = plVar8;
    if (plVar8 == (long *)0x0) {
      uVar15 = 0x1d4;
LAB_00191416:
      piVar11 = ___error();
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                    ,"initFilterState",uVar15,0x25,*piVar11,"malloc");
LAB_00191442:
      bVar2 = false;
      _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                    ,"PCompressFilter",0x1fe,0x25,0,"initFilterState");
      bVar3 = true;
      pauVar21 = local_60;
    }
    else {
      local_68 = (FILE *)(long)*(int *)(*param_1 + 8);
      if (0 < (long)local_68) {
        sVar1 = *(size_t *)param_1[1];
        pvVar9 = _malloc(sVar1);
        plVar8[1] = (long)pvVar9;
        pvVar10 = _malloc(sVar1);
        plVar8[5] = (long)pvVar10;
        *plVar8 = (long)local_e8;
        uVar15 = 0x1dd;
        if (pvVar10 == (void *)0x0 || pvVar9 == (void *)0x0) goto LAB_00191416;
        local_58 = (FILE *)((long)&local_68[-1]._offset + 7);
        pFVar13 = (FILE *)0x0;
        do {
          if (local_58 == pFVar13) goto LAB_00190f9a;
          pvVar9 = _malloc(sVar1);
          plVar8[10] = (long)pvVar9;
          pvVar10 = _malloc(sVar1);
          plVar8[0xe] = (long)pvVar10;
          plVar8[9] = (long)local_e8;
          pFVar13 = (FILE *)((long)&pFVar13->_p + 1);
        } while ((pvVar9 != (void *)0x0) && (plVar8 = plVar8 + 9, pvVar10 != (void *)0x0));
        piVar11 = ___error();
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                      ,"initFilterState",0x1dd,0x25,*piVar11,"malloc");
        auVar24._8_8_ = extraout_XMM1_Qb_01;
        auVar24._0_8_ = extraout_XMM1_Qa_01;
        if (local_68 <= pFVar13) goto LAB_00190f9a;
        goto LAB_00191442;
      }
LAB_00190f9a:
      local_68 = (FILE *)local_d8._0_8_;
      uVar7 = local_e8._8_4_;
      lVar18 = (long)(int)local_e8._8_4_;
      pvVar9 = _malloc(lVar18 * 8);
      pauVar21 = local_60;
      auVar4 = _DAT_0032b310;
      if (pvVar9 == (void *)0x0) {
        piVar11 = ___error();
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                      ,"processStream",0x174,0x25,*piVar11,"malloc");
        pauVar21 = local_60;
LAB_00191589:
        pcVar16 = "processStream";
        uVar15 = 0x201;
LAB_001915a6:
        bVar2 = false;
        _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                      ,"PCompressFilter",uVar15,0x25,0,pcVar16);
        bVar3 = true;
      }
      else {
        if (0 < (int)uVar7) {
          lVar18 = lVar18 + -1;
          auVar22._8_4_ = (int)lVar18;
          auVar22._0_8_ = lVar18;
          auVar22._12_4_ = (int)((ulong)lVar18 >> 0x20);
          auVar23 = pmovsxbq(auVar24,0x100);
          lVar18 = 0;
          auVar22 = auVar22 ^ _DAT_0032b310;
          auVar24 = pmovsxbq(in_XMM4,0x202);
          plVar8 = plStack_80;
          do {
            auVar25 = auVar23 ^ auVar4;
            if ((bool)(~(auVar25._4_4_ == auVar22._4_4_ && auVar22._0_4_ < auVar25._0_4_ ||
                        auVar22._4_4_ < auVar25._4_4_) & 1)) {
              *(long **)((long)pvVar9 + lVar18) = plVar8;
            }
            if (auVar25._12_4_ <= auVar22._12_4_ &&
                (auVar25._12_4_ != auVar22._12_4_ || auVar25._8_4_ <= auVar22._8_4_)) {
              *(long **)((long)pvVar9 + lVar18 + 8) = plVar8 + 9;
            }
            lVar12 = auVar23._8_8_;
            auVar23._0_8_ = auVar23._0_8_ + auVar24._0_8_;
            auVar23._8_8_ = lVar12 + auVar24._8_8_;
            lVar18 = lVar18 + 0x10;
            plVar8 = plVar8 + 0x12;
          } while ((ulong)(uVar7 + 1 >> 1) << 4 != lVar18);
        }
        local_58 = (FILE *)_ThreadPipelineCreate
                                     (uVar7,pvVar9,_compressionWorkerProc,local_e8,_outputStreamProc
                                      ,0);
        if (local_58 == (FILE *)0x0) {
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                        ,"processStream",0x177,0x25,0,"creating pipeline");
          goto LAB_00191589;
        }
        bVar2 = true;
        lVar18 = 0;
        do {
          if ((int)local_78 != 0) {
            bVar2 = false;
            break;
          }
          if (!bVar2) {
            bVar2 = true;
            goto LAB_00191510;
          }
          lVar12 = _ThreadPipelineGetWorker(local_58);
          if (lVar12 == 0) {
            bVar3 = false;
            _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                          ,"processStream",0x183,0x25,0,"getting worker from pipeline");
            bVar2 = false;
          }
          else {
            if (local_e8._4_4_ == 1) {
              pFVar13 = (FILE *)_pcRead(local_c8._0_8_,local_b8._0_8_,&local_48,0x10);
              bVar2 = true;
              if (pFVar13 == (FILE *)0x0) {
                pFVar13 = (FILE *)0x0;
                bVar3 = true;
              }
              else {
                if ((long)pFVar13 < 0) {
                  pFVar13 = (FILE *)0x0;
                  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                                ,"processStream",0x18d,0x25,0,"reading block header");
                }
                else if (pFVar13 == (FILE *)&MACH_HEADER.ncmds) {
                  pFVar20 = (FILE *)(local_48 >> 0x38 | (local_48 & 0xff000000000000) >> 0x28 |
                                     (local_48 & 0xff0000000000) >> 0x18 |
                                     (local_48 & 0xff00000000) >> 8 | (local_48 & 0xff000000) << 8 |
                                     (local_48 & 0xff0000) << 0x18 | (local_48 & 0xff00) << 0x28 |
                                    local_48 << 0x38);
                  pFVar17 = (FILE *)(local_40 >> 0x38 | (local_40 & 0xff000000000000) >> 0x28 |
                                     (local_40 & 0xff0000000000) >> 0x18 |
                                     (local_40 & 0xff00000000) >> 8 | (local_40 & 0xff000000) << 8 |
                                     (local_40 & 0xff0000) << 0x18 | (local_40 & 0xff00) << 0x28 |
                                    local_40 << 0x38);
                  if (local_68 < pFVar20 || local_68 < pFVar17) {
                    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                                  ,"processStream",0x195,0x25,0,
                                  "Invalid block header payload=0x%llx raw=0x%llx block=0x%llx\n",
                                  pFVar17,pFVar20,local_68);
                  }
                  else {
                    pFVar14 = (FILE *)_pcRead(local_c8._0_8_,local_b8._0_8_,
                                              *(undefined8 *)(lVar12 + 8),pFVar17);
                    if (-1 < (long)pFVar14) {
                      pFVar13 = (FILE *)&pFVar14->_flags;
                      if (pFVar14 == pFVar17) {
                        *(FILE **)(lVar12 + 0x18) = pFVar17;
                        *(FILE **)(lVar12 + 0x20) = pFVar20;
                        *(long *)(lVar12 + 0x10) = lVar18;
                        bVar3 = false;
                        bVar2 = true;
                        goto LAB_00191355;
                      }
                      uVar15 = 0x19f;
                      pcVar16 = "Truncated block payload (%lld/%llu bytes read)";
                      goto LAB_001912c1;
                    }
                    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                                  ,"processStream",0x19b,0x25,0,"reading block payload");
                  }
                  pFVar13 = (FILE *)&MACH_HEADER.ncmds;
                }
                else {
                  uVar15 = 399;
                  pcVar16 = "Truncated block header (%lld/16 bytes read)";
                  pFVar14 = pFVar13;
LAB_001912c1:
                  _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                                ,"processStream",uVar15,0x25,0,pcVar16,pFVar14);
                }
                bVar3 = false;
                bVar2 = false;
              }
LAB_00191355:
              local_98._0_8_ = pFVar13->_ubuf + local_98._0_8_ + -0x74;
              if (!(bool)(!bVar3 & bVar2)) {
                if (!bVar2) goto LAB_00191384;
LAB_00191371:
                uVar15 = 0xfffffffffffffffe;
                bVar2 = true;
                goto LAB_0019138e;
              }
              bVar3 = false;
              bVar2 = true;
            }
            else {
              pFVar13 = (FILE *)_pcRead(local_c8._0_8_,local_b8._0_8_,*(undefined8 *)(lVar12 + 8),
                                        local_68);
              if (-1 < (long)pFVar13) {
                if (pFVar13 != (FILE *)0x0) {
                  *(FILE **)(lVar12 + 0x18) = pFVar13;
                  *(undefined8 *)(lVar12 + 0x20) = 0;
                  *(long *)(lVar12 + 0x10) = lVar18;
                  bVar2 = true;
                  bVar3 = false;
                  goto LAB_00191355;
                }
                bVar3 = true;
                goto LAB_00191371;
              }
              bVar3 = false;
              _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                            ,"processStream",0x1ac,0x25,0,"reading block");
LAB_00191384:
              uVar15 = 0xffffffffffffffff;
              bVar2 = false;
LAB_0019138e:
              *(undefined8 *)(lVar12 + 0x10) = uVar15;
            }
            iVar5 = _ThreadPipelineRunWorker(local_58,lVar12);
            if (iVar5 < 0) {
              bVar2 = false;
              _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                            ,"processStream",0x1bd,0x25,0,"RunWorker");
            }
          }
          lVar18 = lVar18 + 1;
        } while (!bVar3);
        bVar2 = !bVar2;
LAB_00191510:
        pauVar21 = local_60;
        iVar5 = _ThreadPipelineDestroy(local_58);
        if (iVar5 < 0) {
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                        ,"processStream",0x1bf,0x25,0,"ThreadPipelineDestroy");
          _free(pvVar9);
          goto LAB_00191589;
        }
        _free(pvVar9);
        if (bVar2) goto LAB_00191589;
        lVar18 = (**(code **)(param_2[1] + 8))(*(undefined8 *)(param_2[2] + 8),0,0);
        if (lVar18 < 0) {
          _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/ParallelCompression/Filter.c"
                        ,"pcWrite",0x79,0x25,0,"pcWrite EOF failed");
          pcVar16 = "writing EOF";
          uVar15 = 0x208;
          goto LAB_001915a6;
        }
        local_98._8_8_ = local_98._8_8_ + lVar18;
        bVar2 = true;
        bVar3 = false;
      }
    }
    if (plStack_80 != (long *)0x0) {
      if (0 < (int)local_e8._8_4_) {
        lVar12 = 0;
        lVar18 = 0;
        do {
          _free(*(void **)((long)plStack_80 + lVar12 + 8));
          _free(*(void **)((long)plStack_80 + lVar12 + 0x28));
          lVar18 = lVar18 + 1;
          lVar12 = lVar12 + 0x48;
          pauVar21 = local_60;
        } while (lVar18 < (int)local_e8._8_4_);
      }
      _free(plStack_80);
      plStack_80 = (long *)0x0;
    }
    if (bVar2 && pauVar21 != (undefined1 (*) [16])0x0) {
      *(undefined8 *)*pauVar21 = local_98._0_8_;
      *(undefined8 *)(*pauVar21 + 8) = local_98._8_8_;
      iVar5 = 0;
      goto LAB_00190e55;
    }
    iVar5 = 0;
    if (!bVar3) goto LAB_00190e55;
  }
  if (*(code **)param_2[2] != (code *)0x0) {
    (**(code **)param_2[2])(*(undefined8 *)(param_2[2] + 8));
  }
  iVar5 = -1;
  if (*(code **)(*param_2 + 8) != (code *)0x0) {
    (**(code **)(*param_2 + 8))(*(undefined8 *)param_2[1]);
  }
LAB_00190e55:
  iVar6 = _leaveThreadErrorContext(0,0,0);
  if (iVar6 < 0) {
    iVar5 = iVar6;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

