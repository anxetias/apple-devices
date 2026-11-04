// rea decompile_all
// name: _patchFile
// address: 0xb47ed
// body: available
// range: 0xb47ed-0xb4ce4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb4ce0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _patchFile(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = (**(code **)(param_3 + 0x10))(param_3,3,&local_58,0x20,0);
  if (lVar3 == 0x20) {
    if (local_58 != 0x3034464649445342) {
      uVar12 = 0;
      _syslog(3,"%s:%d: bad magic\n",
              "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
              ,0x8e);
      goto LAB_000b4c9c;
    }
    lVar3 = _BZOpen(param_3,4,param_4,0x20);
    if (lVar3 != 0) {
      lVar4 = _BZOpen(param_3,5,param_4,local_50 + 0x20);
      if (lVar4 == 0) {
        piVar10 = ___error();
        pcVar14 = _strerror(*piVar10);
        uVar12 = 0;
        _syslog(3,"%s:%d: failed to open diff region: %s\n",
                "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                ,0x9a,pcVar14);
      }
      else {
        lVar5 = _BZOpen(param_3,6,param_4,local_48 + local_50 + 0x20);
        if (lVar5 == 0) {
          piVar10 = ___error();
          pcVar14 = _strerror(*piVar10);
          uVar12 = 0;
          _syslog(3,"%s:%d: failed to open extra region: %s\n",
                  "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                  ,0xa0,pcVar14);
        }
        else {
          local_80 = param_5;
          pvVar6 = _malloc(0x10000);
          if (pvVar6 == (void *)0x0) {
            piVar10 = ___error();
            pcVar14 = _strerror(*piVar10);
            uVar12 = 0;
            _syslog(3,"%s:%d: malloc of filebuf failed: %s\n",
                    "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                    ,0xa6,pcVar14);
          }
          else {
            local_78 = lVar4;
            pvVar7 = _malloc(0x10000);
            if (pvVar7 == (void *)0x0) {
              piVar10 = ___error();
              pcVar14 = _strerror(*piVar10);
              uVar12 = 0;
              _syslog(3,"%s:%d: malloc of patchbuf failed: %s\n",
                      "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                      ,0xac,pcVar14);
            }
            else {
              uVar12 = CONCAT71((int7)((ulong)param_4 >> 8),1);
              if (local_40 != 0) {
                lVar4 = 0;
                uVar12 = 0;
                local_68 = lVar3;
                local_60 = lVar5;
                do {
                  lVar5 = local_60;
                  lVar3 = local_68;
                  local_70 = lVar4;
                  iVar2 = _BZRead(local_68,&local_98,0x18);
                  if (iVar2 != 0x18) {
                    uVar12 = 0;
                    _syslog(3,"%s:%d: failed to read control block\n",
                            "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                            ,0xb2);
                    goto LAB_000b4c70;
                  }
                  uVar1 = local_98;
                  uVar9 = local_90;
                  if ((long)local_88 < 0) {
                    local_88 = -(local_88 & 0x7fffffffffffffff);
                  }
                  for (; local_90 = uVar9, uVar1 != 0; uVar1 = uVar1 - uVar15) {
                    uVar15 = 0x10000;
                    if (uVar1 < 0x10000) {
                      uVar15 = uVar1;
                    }
                    uVar8 = (**(code **)(param_1 + 0x10))(param_1,1,pvVar6,uVar15);
                    if (uVar8 != uVar15) {
                      pcVar14 = "%s:%d: read %zd from orig file, expected %d\n";
                      uVar11 = 0xc2;
                      goto LAB_000b4c5e;
                    }
                    iVar2 = _BZRead(local_78,pvVar7,uVar15 & 0xffffffff);
                    uVar8 = (ulong)iVar2;
                    if (uVar15 != uVar8) {
                      pcVar14 = "%s:%d: read %zd from diff sect, expected %d\n";
                      uVar11 = 199;
                      goto LAB_000b4c5e;
                    }
                    uVar9 = 0;
                    do {
                      *(char *)((long)pvVar7 + uVar9) =
                           *(char *)((long)pvVar7 + uVar9) + *(char *)((long)pvVar6 + uVar9);
                      uVar9 = uVar9 + 1;
                    } while (uVar15 != uVar9);
                    uVar8 = (**(code **)(local_80 + 0x10))(local_80,2,pvVar7,uVar15,uVar12);
                    if (uVar8 != uVar15) {
                      pcVar14 = "%s:%d: wrote %zd to new file, expected %d\n";
                      uVar11 = 0xcf;
                      goto LAB_000b4c5e;
                    }
                    local_70 = local_70 + uVar15;
                    uVar12 = uVar12 + uVar15;
                    uVar9 = local_90;
                  }
                  if (uVar9 != 0) {
                    while( true ) {
                      uVar15 = 0x10000;
                      if (uVar9 < 0x10000) {
                        uVar15 = uVar9;
                      }
                      iVar2 = _BZRead(local_60,pvVar7,uVar15 & 0xffffffff);
                      uVar8 = (ulong)iVar2;
                      if (uVar15 != uVar8) break;
                      uVar8 = (**(code **)(local_80 + 0x10))(local_80,2,pvVar7,uVar15,uVar12);
                      if (uVar8 != uVar15) {
                        pcVar14 = "%s:%d: wrote %zd to new file, expected %d\n";
                        uVar11 = 0xe3;
                        goto LAB_000b4c5e;
                      }
                      uVar12 = uVar12 + uVar15;
                      uVar9 = uVar9 - uVar15;
                      if (uVar9 == 0) goto LAB_000b4a52;
                    }
                    pcVar14 = "%s:%d: read %zd from extra sect, expected %d\n";
                    uVar11 = 0xde;
LAB_000b4c5e:
                    uVar12 = 0;
                    _syslog(3,pcVar14,
                            "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
                            ,uVar11,uVar8,uVar15 & 0xffffffff);
                    lVar5 = local_60;
                    lVar3 = local_68;
                    goto LAB_000b4c70;
                  }
LAB_000b4a52:
                  lVar4 = local_70 + local_88;
                } while (uVar12 < local_40);
                uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
                lVar5 = local_60;
                lVar3 = local_68;
              }
LAB_000b4c70:
              _free(pvVar7);
            }
            _free(pvVar6);
            lVar4 = local_78;
          }
          _BZClose(lVar5);
        }
        _BZClose(lVar4);
      }
      _BZClose(lVar3);
      goto LAB_000b4c9c;
    }
    piVar10 = ___error();
    pcVar14 = _strerror(*piVar10);
    pcVar13 = "%s:%d: failed to open control region: %s\n";
    uVar11 = 0x94;
  }
  else {
    piVar10 = ___error();
    pcVar14 = _strerror(*piVar10);
    pcVar13 = "%s:%d: failed to read header: %s\n";
    uVar11 = 0x89;
  }
  uVar12 = 0;
  _syslog(3,pcVar13,
          "/AppleInternal/Library/BuildRoots/4~CakSugBoKwt6_GaWL187gxnNU-DxDDsFuwbJKqI/Library/Caches/com.apple.xbs/Sources/MobileInstallation_host/patch.c"
          ,uVar11,pcVar14);
LAB_000b4c9c:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

