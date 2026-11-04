// rea decompile_all
// name: _AMSupportX509ChainEvaluateTrust
// address: 0x816c
// body: available
// range: 0x816c-0x8511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x850d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportX509ChainEvaluateTrust(long param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 local_288 [256];
  void *local_188;
  size_t local_180;
  undefined1 local_168 [256];
  void *local_68;
  size_t local_60;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_40 = 0;
  local_48 = 0;
  ___bzero(local_168,0x120);
  ___bzero(local_288,0x120);
  if (param_1 == 0) {
    _AMSupportX509ChainEvaluateTrust_cold_3();
  }
  else if (param_2 == 0) {
    _AMSupportX509ChainEvaluateTrust_cold_2();
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      lVar2 = _CFArrayGetCount(param_2);
      if (lVar2 < 1) {
        _AMSupportLogInternal
                  (3,"AMSupportX509ChainEvaluateTrust",
                   "trustedRootArray must be non NULL and have at least one element");
        uVar3 = 0xfffffc73;
      }
      else {
        uVar3 = _CFArrayGetCount(param_2);
        _AMSupportLogInternal
                  (7,"AMSupportX509ChainEvaluateTrust","Number of trusted roots: %d",uVar3);
        lVar2 = _SecTrustGetCertificateCount(param_1);
        if (lVar2 < 1) {
          pcVar6 = "Array index of root server cert out of range. (%d)";
          uVar3 = 7;
          iVar1 = 0;
        }
        else {
          _AMSupportLogInternal
                    (7,"AMSupportX509ChainEvaluateTrust","Number of server certificates: %d",lVar2);
          _AMSupportLogInternal
                    (7,"AMSupportX509ChainEvaluateTrust","Checking server certificate %d of %d",0,
                     lVar2);
          uVar3 = _SecTrustGetCertificateAtIndex(param_1,0);
          iVar1 = __SecCertificateCopyAMSupportCert(uVar3,local_288,&local_40);
          if (iVar1 == 0) {
            uVar3 = 0;
            _AMSupportLogInternal
                      (7,"AMSupportX509ChainEvaluateTrust","First server cert length %d",local_180);
            lVar2 = _CFArrayGetCount(param_2);
            if (0 < lVar2) {
              lVar2 = 0;
              do {
                uVar4 = _CFArrayGetValueAtIndex(param_2,lVar2);
                iVar1 = __SecCertificateCopyAMSupportCert(uVar4,local_168,&local_48);
                if (iVar1 != 0) {
                  _AMSupportLogInternal
                            (3,"AMSupportX509ChainEvaluateTrust",
                             "PKI: decoding trusted root %d failed with error 0x%08X",lVar2,iVar1);
                  goto LAB_000082e3;
                }
                _AMSupportLogInternal
                          (7,"AMSupportX509ChainEvaluateTrust","Trusted root #%d has length %d",
                           lVar2,local_60);
                if (local_60 == local_180) {
                  iVar1 = _memcmp(local_68,local_188,local_60);
                  if (iVar1 != 0) goto LAB_000083dd;
                  _AMSupportLogInternal
                            (7,"AMSupportX509ChainEvaluateTrust",
                             "PKI: Root cert is identical to trusted root. (success)");
LAB_000084c7:
                  uVar3 = 0;
                  _AMSupportLogInternal
                            (7,"AMSupportX509ChainEvaluateTrust",
                             "PKI: Chain validation complete. (success)");
                  *param_3 = 1;
                  goto LAB_000082e9;
                }
LAB_000083dd:
                iVar1 = _AMSupportX509DecodeVerifyCertIssuer(local_288,local_168);
                if (iVar1 != 0x12) {
                  if (iVar1 == 0) {
                    _AMSupportLogInternal
                              (7,"AMSupportX509ChainEvaluateTrust",
                               "PKI: verify cert was issued by trusted root %d (success)",lVar2);
                    goto LAB_000084c7;
                  }
                  _AMSupportLogInternal
                            (3,"AMSupportX509ChainEvaluateTrust",
                             "PKI: verify cert was issued by trusted root %d failed with error 0x%08X"
                             ,lVar2,iVar1);
                  goto LAB_000082dd;
                }
                if (local_48 != 0) {
                  _CFRelease();
                }
                local_48 = 0;
                lVar2 = lVar2 + 1;
                lVar5 = _CFArrayGetCount(param_2);
              } while (lVar2 < lVar5);
            }
            _AMSupportLogInternal
                      (3,"AMSupportX509ChainEvaluateTrust",
                       "Root cert not signed by any trusted roots.");
            *param_3 = 3;
            goto LAB_000082e9;
          }
          pcVar6 = "PKI: decoding top-level server cert failed with error 0x%08X";
          uVar3 = 3;
        }
        _AMSupportLogInternal(uVar3,"AMSupportX509ChainEvaluateTrust",pcVar6,iVar1);
LAB_000082dd:
        *param_3 = 6;
LAB_000082e3:
        uVar3 = 0xffffffce;
      }
      goto LAB_000082e9;
    }
    _AMSupportX509ChainEvaluateTrust_cold_1();
  }
  uVar3 = 0xfffffffc;
LAB_000082e9:
  if (local_40 != 0) {
    _CFRelease();
    local_40 = 0;
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

