// rea decompile_all
// name: ACFUFTABFile::prettyLog
// address: 0x21b5f6
// body: available
// range: 0x21b5f6-0x21b9f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21b9f2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::prettyLog() */

void __thiscall ACFUFTABFile::prettyLog(ACFUFTABFile *this)

{
  uint uVar1;
  CC_LONG len;
  char cVar2;
  ACFUFTABFile *this_00;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  uchar *puVar7;
  ACFULogging *pAVar8;
  ulong *puVar9;
  void *data;
  uint uVar10;
  byte local_f0 [16];
  void *local_e0;
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  ACFUFTABFile *local_98;
  byte local_90;
  undefined4 local_8f;
  undefined1 local_8b;
  undefined4 *local_80;
  undefined4 *local_78;
  int local_6c;
  uchar local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (*(ACFUDataContainer **)(this + 8) == (ACFUDataContainer *)0x0) {
    prettyLog();
  }
  else {
    cVar2 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(this + 8));
    if (cVar2 == '\0') {
      this_00 = (ACFUFTABFile *)ACFUDataContainer::copyData();
      if (this_00 == (ACFUFTABFile *)0x0) {
        prettyLog();
        goto LAB_0021b9ad;
      }
    }
    else {
      this_00 = (ACFUFTABFile *)
                ACFUDataContainer::copyData(*(ACFUDataContainer **)(this + 8),0,0x30);
      if (this_00 == (ACFUFTABFile *)0x0) {
        prettyLog();
        goto LAB_0021b9ad;
      }
    }
    puVar3 = (undefined4 *)_CFDataGetBytePtr(this_00);
    local_78 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      prettyLog(this_00);
    }
    else {
      local_6c = puVar3[10];
      ACFUFile::fileVersionLog((ACFUFile *)this);
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: =========== FTAB Header ===========\n","ACFUFTABFile","prettyLog")
      ;
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: Generation: %u, Valid: %u, BootNonce: 0x%08llx\n","ACFUFTABFile",
                 "prettyLog",*puVar3,puVar3[1],*(undefined8 *)(puVar3 + 2));
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: Manifest Offset: %u, Manifest Length: %u, Magic: %s\n",
                 "ACFUFTABFile","prettyLog",puVar3[4],puVar3[5],puVar3 + 8);
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: Num Files: %u\n","ACFUFTABFile","prettyLog",puVar3[10]);
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: =========== FTAB Header ===========\n\n","ACFUFTABFile",
                 "prettyLog");
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: =========== FTAB Payloads ===========\n","ACFUFTABFile",
                 "prettyLog");
      _CFRelease(this_00);
      if (local_6c != 0) {
        uVar10 = 0x30;
        local_98 = this;
        do {
          lVar5 = ACFUDataContainer::copyData(*(ACFUDataContainer **)(local_98 + 8),uVar10,0x10);
          if (lVar5 == 0) {
            prettyLog();
            goto LAB_0021b9ad;
          }
          puVar6 = (undefined4 *)_CFDataGetBytePtr(lVar5);
          uVar1 = puVar6[1];
          len = puVar6[2];
          local_90 = 8;
          local_8f = *puVar6;
          local_8b = 0;
          uVar4 = ACFULogging::getLogInstance();
          puVar3 = &local_8f;
          if ((local_90 & 1) != 0) {
            puVar3 = local_80;
          }
          data = (void *)((ulong)uVar1 + (long)local_78);
          ACFULogging::handleMessage
                    (uVar4,4,"%s::%s: Tag: %s :: Offset: 0x%04x Raw address: 0x%lx, size: %u\n",
                     "ACFUFTABFile","prettyLog",puVar3,puVar6[1],data,len);
          cVar2 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(local_98 + 8));
          if (cVar2 == '\0') {
            puVar7 = _CC_SHA384(data,len,local_68);
            if (puVar7 == local_68) {
              pAVar8 = (ACFULogging *)ACFULogging::getLogInstance();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_f0,"ACFUFTABFile");
              puVar9 = (ulong *)std::string::append((char *)local_f0);
              local_a8 = (void *)puVar9[2];
              local_b8 = *puVar9;
              uStack_b0 = puVar9[1];
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              puVar9 = (ulong *)std::string::append((char *)&local_b8);
              local_c8 = (void *)puVar9[2];
              local_d8 = *puVar9;
              uStack_d0 = puVar9[1];
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              ACFULogging::handleMessageBinary(pAVar8,&local_d8,4,local_68,0x30,1);
              if ((local_d8 & 1) != 0) {
                operator_delete(local_c8);
              }
              if ((local_b8 & 1) != 0) {
                operator_delete(local_a8);
              }
              if ((local_f0[0] & 1) != 0) {
                operator_delete(local_e0);
              }
            }
          }
          _CFRelease(lVar5);
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
          uVar10 = uVar10 + 0x10;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
      }
      uVar4 = ACFULogging::getLogInstance();
      ACFULogging::handleMessage
                (uVar4,4,"%s::%s: =========== FTAB Payloads ===========\n\n","ACFUFTABFile",
                 "prettyLog");
    }
  }
LAB_0021b9ad:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

