// rea decompile_all
// name: _MDMCreateDeltaState
// address: 0xae7a8
// body: available
// range: 0xae7a8-0xae94c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * _MDMCreateDeltaState(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  plVar2 = _calloc(0x40,1);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    _dmlog("MDMCreateDeltaState",0x72e,&cf_invalidparameter_new_bundle__p_old_bundle__p_dst_ipa__p,
           param_1,param_2,param_3);
  }
  else {
    *plVar2 = param_1;
    plVar2[2] = param_3;
    lVar3 = _copyComponentOfPath(param_1,0,1);
    plVar2[6] = lVar3;
    if (lVar3 == 0) {
      _MDMCreateDeltaState_cold_8();
    }
    else {
      plVar2[1] = param_2;
      lVar3 = _create_path_str(param_3,"Payload/",0);
      plVar2[3] = lVar3;
      if (lVar3 == 0) {
        _MDMCreateDeltaState_cold_7();
      }
      else {
        iVar1 = _mkdir_recursive(lVar3);
        if (iVar1 == 0) {
          lVar3 = _create_path_str(plVar2[3],plVar2[6],0);
          plVar2[4] = lVar3;
          if (lVar3 == 0) {
            _MDMCreateDeltaState_cold_6();
          }
          else {
            iVar1 = _mkdir_recursive(lVar3);
            if (iVar1 == 0) {
              lVar3 = _copyParentOfPath(plVar2[1]);
              plVar2[7] = lVar3;
              if (lVar3 == 0) {
                _MDMCreateDeltaState_cold_5(plVar2 + 1);
              }
              else {
                lVar3 = _copyBundleIdForPath(*plVar2);
                if (lVar3 != 0) {
                  lVar4 = _create_cmd_filename(plVar2[2],lVar3);
                  plVar2[5] = lVar4;
                  bVar5 = lVar4 == 0;
                  if (bVar5) {
                    _MDMCreateDeltaState_cold_3();
                  }
                  _CFRelease(lVar3);
                  goto LAB_000ae8b9;
                }
                _MDMCreateDeltaState_cold_4(plVar2);
              }
            }
            else {
              _MDMCreateDeltaState_cold_2();
            }
          }
        }
        else {
          _MDMCreateDeltaState_cold_1();
        }
      }
    }
  }
  bVar5 = true;
LAB_000ae8b9:
  if (!(bool)(bVar5 ^ 1U | plVar2 == (long *)0x0)) {
    _MDMDestroyDeltaState(plVar2);
    plVar2 = (long *)0x0;
  }
  return plVar2;
}

