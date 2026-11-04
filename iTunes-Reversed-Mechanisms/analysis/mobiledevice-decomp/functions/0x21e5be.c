// rea decompile_all
// name: ACFUFirmware::hashData
// address: 0x21e5be
// body: available
// range: 0x21e5be-0x21e82c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x21e828 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::hashData(std::string, unsigned int) const */

undefined8 __thiscall ACFUFirmware::hashData(ACFUFirmware *this,byte *param_2,uint param_3)

{
  int iVar1;
  DirectDataRef *this_00;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  CC_LONG len;
  CC_SHA256_CTX local_1b8;
  CC_SHA512_CTX local_150;
  ACFUFirmware *local_80;
  DirectDataRef *local_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_80 = this;
  if ((*param_2 & 1) == 0) {
    if (*param_2 == 0) {
LAB_0021e625:
      uVar4 = ACFULogging::getLogInstance();
      uVar3 = 0;
      ACFULogging::handleMessage
                (uVar4,2,"%s::%s: no firmware file provided\n","ACFUFirmware","hashData");
      goto LAB_0021e7f9;
    }
  }
  else if (*(long *)(param_2 + 8) == 0) goto LAB_0021e625;
  if (param_3 == 0) {
    hashData();
  }
  else {
    iVar5 = *(int *)(this + 0x38);
    if (iVar5 == 2) {
      _CC_SHA512_Init(&local_150);
    }
    else if (iVar5 == 1) {
      _CC_SHA384_Init(&local_150);
    }
    else if (iVar5 == 0) {
      _CC_SHA256_Init(&local_1b8);
    }
    iVar5 = 0;
    do {
      len = 0x100000;
      if (param_3 < 0x100000) {
        len = param_3;
      }
      (**(code **)(**(long **)(local_80 + 0x20) + 8))
                (local_78,*(long **)(local_80 + 0x20),param_2,iVar5,len);
      this_00 = local_78[0];
      if (local_78[0] == (DirectDataRef *)0x0) {
        uVar4 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar4,2,"%s::%s: failed to obtain file data\n","ACFUFirmware","hashData");
        goto LAB_0021e7a0;
      }
      iVar1 = *(int *)(local_80 + 0x38);
      if (iVar1 == 0) {
        pvVar2 = (void *)ACFUDataContainer::DirectDataRef::getDataPtr(local_78[0]);
        _CC_SHA256_Update(&local_1b8,pvVar2,len);
      }
      else if (iVar1 == 1) {
        pvVar2 = (void *)ACFUDataContainer::DirectDataRef::getDataPtr(local_78[0]);
        _CC_SHA384_Update(&local_150,pvVar2,len);
      }
      else if (iVar1 == 2) {
        pvVar2 = (void *)ACFUDataContainer::DirectDataRef::getDataPtr(local_78[0]);
        _CC_SHA512_Update(&local_150,pvVar2,len);
      }
      iVar5 = iVar5 + len;
      ACFUDataContainer::DirectDataRef::~DirectDataRef(this_00);
      operator_delete(this_00);
      param_3 = param_3 - len;
    } while (param_3 != 0);
    iVar5 = *(int *)(local_80 + 0x38);
    if (iVar5 == 2) {
      _CC_SHA512_Final((uchar *)local_78,&local_150);
      uVar3 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_78,0x40);
      goto LAB_0021e7f9;
    }
    if (iVar5 == 1) {
      _CC_SHA384_Final((uchar *)local_78,&local_150);
      uVar3 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_78,0x30);
      goto LAB_0021e7f9;
    }
    if (iVar5 == 0) {
      _CC_SHA256_Final((uchar *)local_78,&local_1b8);
      uVar3 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_78,0x20);
      goto LAB_0021e7f9;
    }
  }
LAB_0021e7a0:
  uVar3 = 0;
LAB_0021e7f9:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

