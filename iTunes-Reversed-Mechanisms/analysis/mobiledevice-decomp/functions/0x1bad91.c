// rea decompile_all
// name: _tss_get_partial_hash
// address: 0x1bad91
// body: available
// range: 0x1bad91-0x1bb01d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bb019 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 _tss_get_partial_hash(long param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar7;
  void *pvVar8;
  void *local_e0;
  undefined8 local_d8;
  int local_cc [3];
  undefined1 local_c0 [104];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  void *pvVar6;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_e0 = (void *)0x0;
  local_cc[1] = 0;
  local_cc[0] = param_2;
  if (param_2 < 1 || param_1 == 0) {
    pvVar6 = (void *)0x0;
    iVar5 = 0;
    _AMAuthInstallLog(3,"tss_get_partial_hash","invalid img3: (%p), size %d",param_1,param_2);
    uVar4 = 0x2714;
    pvVar8 = (void *)0x0;
    if (param_1 == 0) goto LAB_001baf9d;
  }
  else {
    local_d8 = param_3;
    iVar1 = _tss_strip_img3_signature(param_1,local_cc);
    if (iVar1 != 0) {
      _AMAuthInstallLog(3,"tss_get_partial_hash","failed to strip img3 header");
    }
    iVar5 = *(int *)(param_1 + 8);
    uVar7 = (long)iVar5 + 8;
    if ((uVar7 & 0x3f) == 0) {
      pvVar8 = _malloc(uVar7);
      if (pvVar8 == (void *)0x0) {
        pvVar8 = (void *)0x0;
        _AMAuthInstallLog(3,"tss_get_partial_hash","out of memory");
        uVar4 = 0x2716;
      }
      else {
        local_cc[2] = (int)local_d8 + iVar5;
        ___bzero(pvVar8,uVar7);
        *(int *)(param_1 + 0xc) = local_cc[2];
        _memcpy(pvVar8,(void *)(param_1 + 0xc),uVar7);
        iVar2 = _SHA1Reset(local_c0);
        if (iVar2 == 0) {
          iVar2 = _SHA1Input(local_c0,pvVar8,uVar7 & 0xffffffff);
          if (iVar2 == 0) {
            iVar2 = _SHA1ResultPartial(local_c0,&local_58,&local_e0,local_cc + 1);
            if (iVar2 == 0) {
              if (iVar1 == 0) {
                *param_4 = (int)local_d8;
                param_4[1] = iVar5;
                *(undefined8 *)(param_4 + 2) = local_58;
                *(undefined8 *)(param_4 + 4) = uStack_50;
                param_4[6] = local_48;
                uVar4 = 0;
                goto LAB_001baf92;
              }
              pcVar3 = "tss_sha1_hash failed=%d";
              iVar2 = iVar1;
            }
            else {
              pcVar3 = "SHA1ResultPartial failed=%d";
            }
          }
          else {
            pcVar3 = "SHA1Input failed=%d";
          }
        }
        else {
          pcVar3 = "SHA1Reset failed=%d";
        }
        _AMAuthInstallLog(3,"tss_get_partial_hash",pcVar3,iVar2);
        uVar4 = 0x2717;
      }
    }
    else {
      pvVar8 = (void *)0x0;
      _AMAuthInstallLog(3,"tss_get_partial_hash","ih_buffer_len(%d) + 8 is not a multiple of %d",
                        iVar5,0x40);
      uVar4 = 0x2714;
    }
  }
LAB_001baf92:
  *(int *)(param_1 + 0xc) = iVar5;
  pvVar6 = local_e0;
LAB_001baf9d:
  _free(pvVar6);
  _free(pvVar8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

