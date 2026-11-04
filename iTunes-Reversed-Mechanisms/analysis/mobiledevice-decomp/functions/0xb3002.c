// rea decompile_all
// name: _bsdiff
// address: 0xb3002
// body: available
// range: 0xb3002-0xb42a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb3ef0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 _bsdiff(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  BZFILE *b;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  off_t oVar9;
  size_t sVar10;
  void *pvVar11;
  void *pvVar12;
  void *buf;
  FILE *pFVar13;
  long lVar14;
  off_t oVar15;
  int *piVar16;
  undefined8 uVar17;
  size_t sVar18;
  char **ppcVar19;
  long lVar20;
  size_t sVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  char *pcVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  char *pcVar29;
  long local_f8;
  char *local_f0;
  long local_e8;
  char *local_e0;
  undefined4 local_d4;
  void *local_d0;
  long local_c8;
  size_t local_c0;
  long local_b8;
  long local_b0;
  BZFILE *local_a8;
  FILE *local_a0;
  char *local_98;
  char *local_90;
  size_t local_88;
  void *local_80;
  void *local_78;
  uint local_6c;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  byte local_49;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_f8 = 0;
  iVar6 = _open(param_1,0x100,0);
  if (iVar6 < 0) {
LAB_000b3959:
    local_78 = (void *)0x0;
LAB_000b3961:
    local_80 = (void *)0x0;
    _asprintf(&local_68,"%s",param_1);
    pcVar25 = local_68;
    piVar16 = ___error();
    pcVar29 = _strerror(*piVar16);
    _syslog(3,"%s:%d %s%s%s\n","bsdiff",0x131,pcVar25," : ",pcVar29);
    _free(local_68);
    pvVar11 = (void *)0x0;
LAB_000b39c8:
    if (iVar6 != -1) {
      _close(iVar6);
    }
    buf = (void *)0x0;
    pvVar12 = (void *)0x0;
  }
  else {
    local_78 = (void *)0x0;
    sVar8 = _lseek(iVar6,0,2);
    if (sVar8 == 0xffffffffffffffff) goto LAB_000b3961;
    local_f0 = param_3;
    local_78 = _malloc(sVar8 + 1);
    if (local_78 == (void *)0x0) goto LAB_000b3959;
    oVar9 = _lseek(iVar6,0,0);
    if (((oVar9 != 0) || (sVar10 = _read(iVar6,local_78,sVar8), sVar10 != sVar8)) ||
       (iVar7 = _close(iVar6), iVar7 == -1)) goto LAB_000b3961;
    sVar10 = (sVar8 + 1) * 8;
    pvVar11 = _malloc(sVar10);
    if ((pvVar11 == (void *)0x0) || (pvVar12 = _malloc(sVar10), pvVar12 == (void *)0x0)) {
      piVar16 = ___error();
      pcVar25 = _strerror(*piVar16);
      buf = (void *)0x0;
      _syslog(3,"%s:%d %s%s\n","bsdiff",0x136," : ",pcVar25);
      pvVar12 = (void *)0x0;
      local_80 = (void *)0x0;
      goto LAB_000b39e2;
    }
    _qsufsort(pvVar11,pvVar12,local_78,sVar8);
    _free(pvVar12);
    iVar6 = _open(param_2,0x100,0);
    if (iVar6 < 0) {
LAB_000b3a86:
      local_80 = (void *)0x0;
LAB_000b3a8e:
      _asprintf(&local_68,"%s",param_2);
      pcVar25 = local_68;
      piVar16 = ___error();
      pcVar29 = _strerror(*piVar16);
      _syslog(3,"%s:%d %s%s%s\n","bsdiff",0x145,pcVar25," : ",pcVar29);
      _free(local_68);
      goto LAB_000b39c8;
    }
    local_80 = (void *)0x0;
    sVar10 = _lseek(iVar6,0,2);
    if (sVar10 == 0xffffffffffffffff) goto LAB_000b3a8e;
    sVar21 = sVar10 + 1;
    local_c0 = sVar10;
    local_80 = _malloc(sVar21);
    if (local_80 == (void *)0x0) goto LAB_000b3a86;
    oVar9 = _lseek(iVar6,0,0);
    if (((oVar9 != 0) || (sVar10 = _read(iVar6,local_80,local_c0), sVar10 != local_c0)) ||
       (iVar7 = _close(iVar6), iVar7 == -1)) goto LAB_000b3a8e;
    pvVar12 = _malloc(sVar21);
    if ((pvVar12 == (void *)0x0) || (buf = _malloc(sVar21), buf == (void *)0x0)) {
      piVar16 = ___error();
      pcVar25 = _strerror(*piVar16);
      buf = (void *)0x0;
      _syslog(3,"%s:%d %s%s\n","bsdiff",0x14a," : ",pcVar25);
    }
    else {
      pFVar13 = _fopen(local_f0,"w");
      if (pFVar13 != (FILE *)0x0) {
        local_68 = (char *)0x3034464649445342;
        sVar10 = -local_c0;
        if ((long)-local_c0 < 0) {
          sVar10 = local_c0;
        }
        local_60 = 0;
        uStack_58 = 0;
        local_50 = (undefined1)sVar10;
        local_4f = (undefined1)(sVar10 >> 8);
        local_4e = (undefined1)(sVar10 >> 0x10);
        local_4d = (undefined1)(sVar10 >> 0x18);
        local_4c = (undefined1)(sVar10 >> 0x20);
        local_4b = (undefined1)(sVar10 >> 0x28);
        local_4a = (undefined1)(sVar10 >> 0x30);
        bVar3 = (byte)(sVar10 >> 0x38);
        local_49 = bVar3 | 0x80;
        if (-1 < (long)local_c0) {
          local_49 = bVar3;
        }
        local_d0 = pvVar11;
        local_a0 = pFVar13;
        sVar10 = _fwrite(&local_68,0x20,1,pFVar13);
        if (sVar10 == 1) {
          local_e8 = 0;
          lVar28 = 0;
          local_a8 = _BZ2_bzWriteOpen((int *)&local_6c,local_a0,9,0,0);
          if (local_a8 == (BZFILE *)0x0) {
            ppcVar19 = (char **)&local_40;
            _asprintf(ppcVar19,"BZ2_bzWriteOpen, bz2err = %d",(ulong)local_6c);
            local_90 = (char *)CONCAT17(local_40._7_1_,
                                        CONCAT16(local_40._6_1_,
                                                 CONCAT15(local_40._5_1_,
                                                          CONCAT14(local_40._4_1_,
                                                                   CONCAT13(local_40._3_1_,
                                                                            CONCAT12(local_40._2_1_,
                                                                                     CONCAT11(
                                                  local_40._1_1_,(undefined1)local_40)))))));
            pcVar25 = "";
            pcVar29 = "";
            uVar17 = 0x165;
            goto LAB_000b3c25;
          }
          local_e0 = (char *)0x0;
          if (0 < (long)local_c0) {
            local_e0 = (char *)0x0;
            local_e8 = 0;
            local_b0 = 0;
            local_c8 = 0;
            local_b8 = 0;
            lVar14 = 0;
            sVar10 = 0;
            sVar21 = local_c0;
            do {
              pvVar11 = local_78;
              lVar23 = local_b0;
              sVar18 = sVar10 + lVar14;
              lVar28 = CONCAT71((int7)((ulong)lVar28 >> 8),(long)sVar18 < (long)sVar21);
              local_d4 = (undefined4)lVar28;
              if ((long)sVar18 < (long)sVar21) {
                lVar26 = 0;
                local_88 = sVar18;
                do {
                  pcVar25 = (char *)((long)local_80 + local_88);
                  local_98 = pcVar25;
                  lVar14 = _search(local_d0,local_78,sVar8,pcVar25,sVar21 - local_88,0,sVar8,
                                   &local_f8);
                  for (sVar10 = sVar18; (long)sVar10 < (long)(lVar14 + local_88);
                      sVar10 = sVar10 + 1) {
                    pcVar25 = (char *)(local_b0 + sVar10);
                    if ((long)pcVar25 < (long)sVar8) {
                      cVar1 = *(char *)((long)pvVar11 + sVar10 + lVar23);
                      pcVar25 = (char *)CONCAT71((int7)((ulong)pcVar25 >> 8),cVar1);
                      lVar26 = lVar26 + (ulong)(cVar1 == *(char *)((long)local_80 + sVar10));
                    }
                    sVar18 = lVar14 + local_88;
                  }
                  lVar28 = CONCAT71((int7)((ulong)pcVar25 >> 8),lVar14 != 0);
                  sVar10 = local_88;
                  sVar21 = local_c0;
                  if ((lVar14 != 0 && lVar14 == lVar26) || (lVar28 = lVar26 + 8, lVar28 < lVar14))
                  goto LAB_000b345f;
                  if ((long)(local_88 + local_b0) < (long)sVar8) {
                    lVar26 = lVar26 - (ulong)(*(char *)((long)local_78 + local_88 + local_b0) ==
                                             *local_98);
                  }
                  local_88 = local_88 + 1;
                } while ((long)local_88 < (long)local_c0);
                local_d4 = 0;
                sVar10 = local_c0;
LAB_000b346d:
                if (local_b8 < (long)sVar10) {
                  lVar26 = -1;
                  lVar20 = 0;
                  lVar28 = 0;
                  lVar23 = 0;
                  lVar24 = 0;
                  do {
                    if ((long)sVar8 <= local_c8 + lVar20) break;
                    lVar24 = lVar24 + (ulong)(*(char *)((long)local_78 + lVar20 + local_c8) ==
                                             *(char *)((long)local_80 + lVar20 + local_b8));
                    lVar20 = lVar20 + 1;
                    if (lVar23 * 2 - lVar28 < lVar26 + lVar24 * 2) {
                      lVar28 = lVar20;
                      lVar23 = lVar24;
                    }
                    lVar26 = lVar26 + -1;
                  } while (sVar10 - local_b8 != lVar20);
                }
                else {
                  lVar28 = 0;
                }
                if (((char)local_d4 == '\0') || (local_f8 < 1 || (long)sVar10 <= local_b8)) {
                  local_88 = 0;
                }
                else {
                  local_b0 = (long)local_80 + sVar10;
                  lVar26 = -1;
                  local_88 = 0;
                  lVar23 = 0;
                  lVar20 = 0;
                  sVar21 = 1;
                  do {
                    lVar20 = (ulong)(*(char *)((long)local_78 + lVar26 + local_f8) ==
                                    *(char *)(local_b0 + lVar26)) + lVar20;
                    if ((long)(lVar23 * 2 - local_88) < lVar26 + lVar20 * 2) {
                      local_88 = sVar21;
                      lVar23 = lVar20;
                    }
                    if ((long)sVar10 < (long)(sVar21 + local_b8 + 1)) break;
                    lVar26 = lVar26 + -1;
                    bVar2 = (long)sVar21 < local_f8;
                    sVar21 = sVar21 + 1;
                  } while (bVar2);
                }
                lVar23 = lVar28 + local_b8;
                lVar26 = sVar10 - local_88;
                lVar20 = lVar23 - lVar26;
                if (lVar20 != 0 && lVar26 <= lVar23) {
                  if (lVar20 == 0 || lVar23 < lVar26) {
                    lVar23 = 0;
                  }
                  else {
                    lVar22 = 0;
                    lVar23 = 0;
                    lVar24 = 0;
                    lVar27 = 0;
                    do {
                      cVar1 = *(char *)((long)local_80 + lVar22 + lVar26);
                      lVar27 = ((ulong)(cVar1 == *(char *)((long)local_78 +
                                                          lVar22 + ((local_c8 + lVar28) - lVar20)))
                               + lVar27) -
                               (ulong)(cVar1 == *(char *)((long)local_78 +
                                                         lVar22 + (local_f8 - local_88)));
                      lVar22 = lVar22 + 1;
                      if (lVar24 < lVar27) {
                        lVar23 = lVar22;
                        lVar24 = lVar27;
                      }
                    } while (lVar22 < lVar20);
                  }
                  lVar28 = (lVar28 - lVar20) + lVar23;
                  local_88 = local_88 - lVar23;
                }
                if (0 < lVar28) {
                  lVar23 = 0;
                  do {
                    *(char *)((long)pvVar12 + lVar23 + local_e8) =
                         *(char *)((long)local_80 + lVar23 + local_b8) -
                         *(char *)((long)local_78 + lVar23 + local_c8);
                    lVar23 = lVar23 + 1;
                  } while (lVar28 != lVar23);
                }
                lVar23 = sVar10 - local_88;
                lVar26 = local_b8 + lVar28;
                local_98 = (char *)(lVar23 - lVar26);
                local_b8 = lVar23;
                if (local_98 != (char *)0x0 && lVar26 <= lVar23) {
                  _memcpy(local_e0 + (long)buf,(void *)(lVar26 + (long)local_80),(size_t)local_98);
                }
                b = local_a8;
                lVar23 = -lVar28;
                if (-lVar28 < 0) {
                  lVar23 = lVar28;
                }
                local_40._0_1_ = (undefined1)lVar23;
                local_40._1_1_ = (undefined1)((ulong)lVar23 >> 8);
                bVar3 = (byte)((ulong)lVar23 >> 0x38);
                local_40._2_1_ = (undefined1)((ulong)lVar23 >> 0x10);
                local_40._3_1_ = (undefined1)((ulong)lVar23 >> 0x18);
                local_40._4_1_ = (undefined1)((ulong)lVar23 >> 0x20);
                local_40._5_1_ = (undefined1)((ulong)lVar23 >> 0x28);
                local_40._6_1_ = (undefined1)((ulong)lVar23 >> 0x30);
                local_40._7_1_ = bVar3 | 0x80;
                if (-1 < lVar28) {
                  local_40._7_1_ = bVar3;
                }
                local_b0 = lVar28;
                _BZ2_bzWrite((int *)&local_6c,local_a8,&local_40,8);
                if (local_6c != 0) {
                  _asprintf(&local_90,"BZ2_bzWrite, bz2err = %d");
                  goto LAB_000b3e24;
                }
                pcVar25 = (char *)-(long)local_98;
                if (-(long)local_98 < 0) {
                  pcVar25 = local_98;
                }
                local_40._0_1_ = SUB81(pcVar25,0);
                local_40._1_1_ = (undefined1)((ulong)pcVar25 >> 8);
                bVar3 = (byte)((ulong)pcVar25 >> 0x38);
                local_40._2_1_ = (undefined1)((ulong)pcVar25 >> 0x10);
                local_40._3_1_ = (undefined1)((ulong)pcVar25 >> 0x18);
                local_40._4_1_ = (undefined1)((ulong)pcVar25 >> 0x20);
                local_40._5_1_ = (undefined1)((ulong)pcVar25 >> 0x28);
                local_40._6_1_ = (undefined1)((ulong)pcVar25 >> 0x30);
                local_40._7_1_ = bVar3 | 0x80;
                if (-1 < (long)local_98) {
                  local_40._7_1_ = bVar3;
                }
                _BZ2_bzWrite((int *)&local_6c,b,&local_40,8);
                lVar23 = local_f8;
                if (local_6c != 0) {
                  _asprintf(&local_90,"BZ2_bzWrite, bz2err = %d");
                  goto LAB_000b3e24;
                }
                lVar26 = local_f8 - (local_c8 + local_b0 + local_88);
                lVar28 = -lVar26;
                if (-lVar26 < 0) {
                  lVar28 = lVar26;
                }
                local_40._0_1_ = (undefined1)lVar28;
                local_40._1_1_ = (undefined1)((ulong)lVar28 >> 8);
                local_40._2_1_ = (undefined1)((ulong)lVar28 >> 0x10);
                local_40._3_1_ = (undefined1)((ulong)lVar28 >> 0x18);
                local_40._4_1_ = (undefined1)((ulong)lVar28 >> 0x20);
                local_40._5_1_ = (undefined1)((ulong)lVar28 >> 0x28);
                local_40._6_1_ = (undefined1)((ulong)lVar28 >> 0x30);
                bVar3 = (byte)((ulong)lVar28 >> 0x38);
                local_40._7_1_ = bVar3 | 0x80;
                if (-1 < lVar26) {
                  local_40._7_1_ = bVar3;
                }
                lVar28 = 0;
                _BZ2_bzWrite((int *)&local_6c,local_a8,&local_40,8);
                if (local_6c != 0) {
                  _asprintf(&local_90,"BZ2_bzWrite, bz2err = %d");
                  goto LAB_000b3e24;
                }
                local_e8 = local_e8 + local_b0;
                local_e0 = local_e0 + (long)local_98;
                local_c8 = lVar23 - local_88;
                local_b0 = lVar23 - sVar10;
                sVar21 = local_c0;
              }
              else {
                lVar26 = 0;
                sVar10 = sVar18;
LAB_000b345f:
                if ((sVar10 == sVar21) || (lVar14 != lVar26)) goto LAB_000b346d;
              }
            } while ((long)sVar10 < (long)sVar21);
          }
          _BZ2_bzWriteClose((int *)&local_6c,local_a8,0,(uint *)0x0,(uint *)0x0);
          if (local_6c != 0) {
            ppcVar19 = &local_90;
            _asprintf(ppcVar19,"BZ2_bzWriteClose, bz2err = %d");
            pcVar25 = "";
            pcVar29 = "";
            uVar17 = 0x1f1;
            goto LAB_000b3c25;
          }
          oVar9 = _ftello(local_a0);
          if (oVar9 == -1) {
            ppcVar19 = &local_90;
            _asprintf(ppcVar19,"ftello");
            piVar16 = ___error();
            pcVar29 = _strerror(*piVar16);
            uVar17 = 0x1f5;
            goto LAB_000b3be2;
          }
          lVar28 = -(oVar9 + -0x20);
          if (lVar28 < 0) {
            lVar28 = oVar9 + -0x20;
          }
          bVar3 = (byte)((ulong)lVar28 >> 0x38);
          bVar5 = bVar3 | 0x80;
          if (0x1f < oVar9) {
            bVar5 = bVar3;
          }
          local_60 = CONCAT17(bVar5,(int7)lVar28);
          local_a8 = _BZ2_bzWriteOpen((int *)&local_6c,local_a0,9,0,0);
          if (local_a8 == (BZFILE *)0x0) {
            ppcVar19 = &local_90;
            _asprintf(ppcVar19,"BZ2_bzWriteOpen, bz2err = %d",(ulong)local_6c);
            pcVar25 = "";
            pcVar29 = "";
            uVar17 = 0x1fa;
            goto LAB_000b3c25;
          }
          _BZ2_bzWrite((int *)&local_6c,local_a8,pvVar12,(int)local_e8);
          if (local_6c == 0) {
            _BZ2_bzWriteClose((int *)&local_6c,local_a8,0,(uint *)0x0,(uint *)0x0);
            if (local_6c == 0) {
              oVar15 = _ftello(local_a0);
              if (oVar15 == -1) {
                ppcVar19 = &local_90;
                _asprintf(ppcVar19,"ftello");
                piVar16 = ___error();
                pcVar29 = _strerror(*piVar16);
                uVar17 = 0x205;
                goto LAB_000b3be2;
              }
              lVar14 = oVar15 - oVar9;
              lVar28 = -lVar14;
              if (-lVar14 < 0) {
                lVar28 = lVar14;
              }
              bVar3 = (byte)((ulong)lVar28 >> 0x38);
              bVar5 = bVar3 | 0x80;
              if (-1 < lVar14) {
                bVar5 = bVar3;
              }
              uStack_58 = CONCAT17(bVar5,(int7)lVar28);
              local_a8 = _BZ2_bzWriteOpen((int *)&local_6c,local_a0,9,0,0);
              if (local_a8 == (BZFILE *)0x0) {
                ppcVar19 = &local_90;
                _asprintf(ppcVar19,"BZ2_bzWriteOpen, bz2err = %d",(ulong)local_6c);
                pcVar25 = "";
                pcVar29 = "";
                uVar17 = 0x20a;
              }
              else {
                _BZ2_bzWrite((int *)&local_6c,local_a8,buf,(int)local_e0);
                if (local_6c != 0) {
                  _asprintf(&local_90,"BZ2_bzWrite, bz2err = %d");
                  goto LAB_000b3e24;
                }
                _BZ2_bzWriteClose((int *)&local_6c,local_a8,0,(uint *)0x0,(uint *)0x0);
                if (local_6c == 0) {
                  iVar6 = _fseeko(local_a0,0,0);
                  if (iVar6 == 0) {
                    sVar8 = _fwrite(&local_68,0x20,1,local_a0);
                    if (sVar8 == 1) {
                      iVar6 = _fclose(local_a0);
                      if (iVar6 == 0) {
                        uVar17 = 0;
                        pvVar11 = local_d0;
                        goto LAB_000b39e6;
                      }
                      _asprintf(&local_90,"fclose");
                      pcVar25 = local_90;
                      piVar16 = ___error();
                      pcVar29 = _strerror(*piVar16);
                      _syslog(3,"%s:%d %s%s%s\n","bsdiff",0x21a,pcVar25," : ",pcVar29);
                      _free(local_90);
                      goto LAB_000b3c40;
                    }
                    ppcVar19 = &local_90;
                    _asprintf(ppcVar19,"fwrite(%s)",local_f0);
                    piVar16 = ___error();
                    pcVar29 = _strerror(*piVar16);
                    uVar17 = 0x217;
                  }
                  else {
                    ppcVar19 = &local_90;
                    _asprintf(ppcVar19,"fseeko");
                    piVar16 = ___error();
                    pcVar29 = _strerror(*piVar16);
                    uVar17 = 0x215;
                  }
                  goto LAB_000b3be2;
                }
                ppcVar19 = &local_90;
                _asprintf(ppcVar19,"BZ2_bzWriteClose, bz2err = %d");
                pcVar25 = "";
                pcVar29 = "";
                uVar17 = 0x211;
              }
            }
            else {
              ppcVar19 = &local_90;
              _asprintf(ppcVar19,"BZ2_bzWriteClose, bz2err = %d");
              pcVar25 = "";
              pcVar29 = "";
              uVar17 = 0x201;
            }
            goto LAB_000b3c25;
          }
          _asprintf(&local_90,"BZ2_bzWrite, bz2err = %d");
LAB_000b3e24:
          _syslog(3,"%s:%d %s%s%s\n","bsdiff");
          _free(local_90);
          _fclose(local_a0);
          _BZ2_bzWriteClose((int *)&local_6c,local_a8,0,(uint *)0x0,(uint *)0x0);
        }
        else {
          ppcVar19 = (char **)&local_40;
          _asprintf(ppcVar19,"fwrite(%s)",local_f0);
          pcVar25 = (char *)CONCAT17(local_40._7_1_,
                                     CONCAT16(local_40._6_1_,
                                              CONCAT15(local_40._5_1_,
                                                       CONCAT14(local_40._4_1_,
                                                                CONCAT13(local_40._3_1_,
                                                                         CONCAT12(local_40._2_1_,
                                                                                  CONCAT11(local_40.
                                                  _1_1_,(undefined1)local_40)))))));
          piVar16 = ___error();
          pcVar29 = _strerror(*piVar16);
          uVar17 = 0x161;
          local_90 = pcVar25;
LAB_000b3be2:
          pcVar25 = " : ";
LAB_000b3c25:
          _syslog(3,"%s:%d %s%s%s\n","bsdiff",uVar17,local_90,pcVar25,pcVar29);
          _free(*ppcVar19);
          _fclose(local_a0);
        }
LAB_000b3c40:
        uVar17 = 1;
        pvVar11 = local_d0;
        goto LAB_000b39e6;
      }
      _asprintf(&local_68,"%s",local_f0);
      pcVar25 = local_68;
      piVar16 = ___error();
      pcVar29 = _strerror(*piVar16);
      _syslog(3,"%s:%d %s%s%s\n","bsdiff",0x150,pcVar25," : ",pcVar29);
      _free(local_68);
    }
  }
LAB_000b39e2:
  uVar17 = 1;
LAB_000b39e6:
  pvVar4 = local_78;
  _free(pvVar12);
  _free(buf);
  _free(pvVar11);
  _free(pvVar4);
  _free(local_80);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar17;
}

