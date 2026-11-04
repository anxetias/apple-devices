// rea decompile_all
// name: ___AFCProcessStatusPacket
// address: 0x269b84
// body: available
// range: 0x269b84-0x269d08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int ___AFCProcessStatusPacket(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long local_38;
  
  lVar7 = *(long *)(param_2 + 0x58);
  lVar3 = ___AFCOperationGetDataLength(param_2);
  local_38 = 0;
  uVar4 = _CFGetAllocator(param_2);
  if (lVar3 < 1) {
    lVar5 = 0;
LAB_00269c22:
    uVar1 = *(uint *)(lVar7 + 0x28);
    uVar8 = uVar1 | 0xe8004000;
    if (uVar1 == 0) {
      uVar8 = 0;
    }
    *(uint *)(param_2 + 0x28) = uVar8;
    if (uVar1 == 0) {
      uVar6 = _CFRetain(*(undefined8 *)PTR__kCFNull_00441158);
      *(undefined8 *)(param_2 + 0xf0) = uVar6;
      iVar2 = 0;
    }
    else {
      uVar6 = _CFGetAllocator(param_2);
      lVar7 = ___AFCCreateErrorObject(uVar6,*(undefined4 *)(param_2 + 0x28),local_38);
      *(long *)(param_2 + 0xf0) = lVar7;
      iVar2 = -0x17ffbffd;
      if (lVar7 != 0) {
        iVar2 = 0;
      }
      _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x28);
      if (*(long *)(param_1 + 0x48) != 0) {
        _CFRelease();
      }
      lVar7 = *(long *)(param_2 + 0xf0);
      *(long *)(param_1 + 0x48) = lVar7;
      if (lVar7 != 0) {
        _CFRetain();
      }
      _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
    }
    if (lVar5 == 0) goto LAB_00269cdc;
  }
  else {
    lVar5 = _CFAllocatorAllocate(uVar4,lVar3,0);
    if (lVar5 == 0) {
      iVar2 = -0x17ffbffd;
      goto LAB_00269cdc;
    }
    iVar2 = _AFCReadData(param_1,lVar5,lVar3);
    if (iVar2 == 0) {
      uVar6 = _CFGetAllocator(param_2);
      iVar2 = ___AFCCreateDictionaryOrArrayFromData(uVar6,lVar5,lVar3,1,&local_38);
      if (iVar2 != 0) {
        local_38 = 0;
      }
      goto LAB_00269c22;
    }
  }
  _CFAllocatorDeallocate(uVar4,lVar5);
LAB_00269cdc:
  if (local_38 != 0) {
    _CFRelease();
  }
  return iVar2;
}

