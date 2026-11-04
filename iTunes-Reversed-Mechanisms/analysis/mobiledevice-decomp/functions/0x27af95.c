// rea decompile_all
// name: _AMAuthInstallApImg4LocalCreateEncodedCertificateChain
// address: 0x27af95
// body: available
// range: 0x27af95-0x27b2b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4LocalCreateEncodedCertificateChain(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  int iVar9;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    iVar9 = 1;
    iVar1 = 1;
    lVar6 = 0;
    lVar4 = 0;
    if (param_2 == (undefined8 *)0x0) goto LAB_0027b108;
  }
  else {
    uVar3 = _CFGetAllocator();
    lVar6 = 0;
    lVar4 = _CFDataCreateMutable(uVar3,0);
    if (lVar4 == 0) {
      iVar1 = 2;
      lVar4 = 0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      if (*(char *)(lVar6 + 0x14) == '\0') {
        pcVar8 = *(cfstringStruct **)(param_1 + 400);
        if (pcVar8 == (cfstringStruct *)0x0) {
          if (*(char *)(param_1 + 0x1f9) != '\0') {
            pcVar8 = &cf_ap_ticket_localpolicy_hacktivation_leaf_cert;
LAB_0027b03b:
            *(cfstringStruct **)(param_1 + 400) = pcVar8;
            goto LAB_0027b043;
          }
          if ((*(char *)(lVar6 + 0x48) == '\0') && (*(int *)(lVar6 + 0x10) == 0)) {
            pcVar8 = &cf_ap_ticket_8960_unfused_cert;
            goto LAB_0027b03b;
          }
          if (*(char *)(lVar6 + 0x49) == '\0') {
            pcVar8 = &cf_ap_ticket_8960_dev_cert;
            goto LAB_0027b03b;
          }
          iVar1 = *(int *)(lVar6 + 8);
          if (iVar1 == 0x8002) {
            pcVar8 = &cf_ap_ticket_8002_insec_cert;
            goto LAB_0027b03b;
          }
          if (iVar1 == 0x8960) {
            pcVar8 = *(cfstringStruct **)(param_1 + 0x198);
            if (pcVar8 == (cfstringStruct *)0x0) {
              pcVar8 = &cf_ap_ticket_ca_cert;
              *(cfstringStruct **)(param_1 + 0x198) = &cf_ap_ticket_ca_cert;
            }
            iVar1 = _AMAuthInstallCryptoGetCertData(param_1,pcVar8,&local_38);
            if (iVar1 == 0) {
              uVar3 = _CFDataGetBytePtr(local_38);
              uVar5 = _CFDataGetLength(local_38);
              _CFDataAppendBytes(lVar4,uVar3,uVar5);
              pcVar8 = &cf_ap_ticket_8960_insec_cert;
              goto LAB_0027b03b;
            }
            goto LAB_0027b278;
          }
          if (iVar1 == 0x8010) {
            pcVar8 = &cf_ap_ticket_8010_insec_cert;
            goto LAB_0027b03b;
          }
          pcVar7 = "unrecognized chipid: 0x%08X";
        }
        else {
LAB_0027b043:
          if ((((*(char *)(param_1 + 0x1f9) != '\0') ||
               (*(char *)(*(long *)(param_1 + 0x10) + 0x4d) != '\0')) ||
              (iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 8), iVar1 == 0x8002)) ||
             ((iVar1 == 0x8960 || (iVar1 == 0x8010)))) {
            iVar1 = _AMAuthInstallCryptoGetCertData(param_1,pcVar8,&local_38);
            if (iVar1 == 0) {
              uVar3 = _CFDataGetBytePtr(local_38);
              uVar5 = _CFDataGetLength(local_38);
              _CFDataAppendBytes(lVar4,uVar3,uVar5);
              iVar9 = 0;
              lVar6 = _DEREncoderCreate(0);
              if (lVar6 == 0) {
                lVar6 = 0;
                goto LAB_0027b108;
              }
              uVar3 = _CFDataGetBytePtr(lVar4);
              uVar2 = _CFDataGetLength(lVar4);
              iVar1 = _DEREncoderAddData(lVar6,0,0x10,uVar3,uVar2,1);
              if (iVar1 == 0) {
                iVar1 = _DEREncoderCreateEncodedBuffer(lVar6,&local_40,&local_44);
                if (iVar1 == 0) {
                  iVar9 = 0;
                  uVar3 = _CFDataCreate(0,local_40,local_44);
                  *param_2 = uVar3;
                }
                else {
                  iVar9 = 0;
                  _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateEncodedCertificateChain",
                                    "%s: failed to create buffer");
                }
                goto LAB_0027b108;
              }
              iVar1 = 3;
            }
            else {
LAB_0027b278:
              lVar6 = 0;
            }
            goto LAB_0027b00b;
          }
          pcVar7 = "chipid: 0x%08X unsupported for img4 local signing";
        }
        lVar6 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateEncodedCertificateChain",pcVar7);
        iVar1 = 1;
      }
      else {
        lVar6 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateEncodedCertificateChain",
                          "local signing is not available for production fused devices.");
        iVar1 = 0xe;
      }
    }
  }
LAB_0027b00b:
  _SafeRelease(*param_2);
  iVar9 = iVar1;
LAB_0027b108:
  _SafeRelease(lVar4);
  _SafeFree(local_40);
  _DEREncoderDestroy(lVar6);
  return iVar9;
}

