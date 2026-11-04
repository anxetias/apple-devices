// rea decompile_all
// name: __SecCertificateCopyAMSupportCert
// address: 0x8512
// body: available
// range: 0x8512-0x860b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __SecCertificateCopyAMSupportCert(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == (undefined8 *)0x0) {
    __SecCertificateCopyAMSupportCert_cold_4();
  }
  else if (param_2 == 0) {
    __SecCertificateCopyAMSupportCert_cold_3();
  }
  else if (param_1 == 0) {
    __SecCertificateCopyAMSupportCert_cold_2();
  }
  else {
    lVar2 = _SecCertificateCopyData();
    if (lVar2 != 0) {
      lVar3 = _CFDataGetBytePtr(lVar2);
      iVar1 = _CFDataGetLength(lVar2);
      if (iVar1 == 0 || lVar3 == 0) {
        _AMSupportLogInternal
                  (3,"_SecCertificateCopyAMSupportCert",
                   "chain_blob must be non NULL and chain_blob_length must be non 0");
        iVar1 = 99;
      }
      else {
        iVar1 = _AMSupportX509DecodeCertificate(param_2,lVar3,iVar1);
        if (iVar1 == 0) {
          uVar4 = _CFRetain(lVar2);
          *param_3 = uVar4;
          iVar1 = 0;
        }
        else {
          _AMSupportLogInternal
                    (7,"_SecCertificateCopyAMSupportCert",
                     "PKI: decoding cert failed with error 0x%08X",iVar1);
        }
      }
      _CFRelease(lVar2);
      return iVar1;
    }
    __SecCertificateCopyAMSupportCert_cold_1();
  }
  return 99;
}

