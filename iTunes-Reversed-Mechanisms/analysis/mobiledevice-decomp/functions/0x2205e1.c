// rea decompile_all
// name: ACFUCommon::removeFileWithURL
// address: 0x2205e1
// body: available
// range: 0x2205e1-0x220744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUCommon::removeFileWithURL(__CFURL const*) */

ulong ACFUCommon::removeFileWithURL(__CFURL *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ACFULogging *pAVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte local_70 [16];
  void *local_60;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  ulong local_38;
  ulong uStack_30;
  void *local_28;
  
  if (param_1 != (__CFURL *)0x0) {
    lVar2 = _CFURLGetTypeID();
    lVar3 = _CFGetTypeID(param_1);
    if (lVar2 == lVar3) {
      pAVar4 = (ACFULogging *)ACFULogging::getLogInstance();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_70,"ACFUCommon");
      puVar5 = (ulong *)std::string::append((char *)local_70);
      local_28 = (void *)puVar5[2];
      local_38 = *puVar5;
      uStack_30 = puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5 = (ulong *)std::string::append((char *)&local_38);
      local_48 = (void *)puVar5[2];
      local_58 = *puVar5;
      uStack_50 = puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      ACFULogging::handleMessageCFType(pAVar4,&local_58,0,"Removing file at URL: ",param_1);
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
      if ((local_38 & 1) != 0) {
        operator_delete(local_28);
      }
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      iVar1 = _AMSupportRemoveFile(param_1);
      if (iVar1 == 0) {
        uVar7 = CONCAT71((int7)((ulong)param_1 >> 8),1);
      }
      else {
        uVar6 = ACFULogging::getLogInstance();
        uVar7 = 0;
        ACFULogging::handleMessage
                  (uVar6,2,"%s::%s: failed to remove file (%u)\n","ACFUCommon","removeFileWithURL",
                   iVar1);
      }
      goto LAB_00220734;
    }
  }
  uVar6 = ACFULogging::getLogInstance();
  uVar7 = 0;
  ACFULogging::handleMessage
            (uVar6,2,"%s::%s: failed due to unexpected data type\n","ACFUCommon","removeFileWithURL"
            );
LAB_00220734:
  return uVar7 & 0xffffffff;
}

