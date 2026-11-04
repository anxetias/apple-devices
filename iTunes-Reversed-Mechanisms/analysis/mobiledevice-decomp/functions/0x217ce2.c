// rea decompile_all
// name: ACFUDataContainer::copyDirectData
// address: 0x217ce2
// body: available
// range: 0x217ce2-0x217f36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::copyDirectData(unsigned int, unsigned long) */

unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>> *
ACFUDataContainer::copyDirectData(uint param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  DirectDataRef *pDVar5;
  void *pvVar6;
  int *piVar7;
  DirectDataRef DVar8;
  size_t in_RCX;
  uint in_EDX;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 in_register_0000003c;
  unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
  *this;
  ulong uVar12;
  
  this = (unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
          *)CONCAT44(in_register_0000003c,param_1);
  *(undefined8 *)this = 0;
  if (in_RCX == 0) {
    uVar4 = ACFULogging::getLogInstance();
    pcVar9 = "%s::%s: invalid offset value\n";
    uVar11 = 2;
  }
  else {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      if (*(int *)(param_2 + 8) < 0) {
        uVar4 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar4,2,"%s::%s: invalid file descriptor\n","ACFUDataContainer","copyDirectData")
        ;
        return this;
      }
      lVar2 = _sysconf(0x1d);
      lVar3 = _sysconf(0x1d);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = CONCAT44(0,in_EDX);
      uVar4 = ACFULogging::getLogInstance();
      uVar10 = (ulong)((double)lVar3 * (double)SUB168(auVar1 / SEXT816(lVar2),0));
      uVar12 = (ulong)(in_EDX - (int)uVar10);
      lVar2 = uVar12 + in_RCX;
      lVar3 = lVar2;
      ACFULogging::handleMessage
                (uVar4,4,
                 "%s::%s: paging in new length for page alignment (Requested: %zu. Aligned: %zu)\n",
                 "ACFUDataContainer","copyDirectData");
      lVar2 = _mmap(0,lVar2,1,1,*(undefined4 *)(param_2 + 8),uVar10 & 0xffffffff,lVar3);
      if (lVar2 == -1) {
        uVar4 = ACFULogging::getLogInstance();
        piVar7 = ___error();
        pcVar9 = _strerror(*piVar7);
        ACFULogging::handleMessage
                  (uVar4,2,"%s::%s: failed to map file: (%s)\n","ACFUDataContainer","copyDirectData"
                   ,pcVar9);
        return this;
      }
      pDVar5 = operator_new(0x18);
      *(ulong *)pDVar5 = lVar2 + uVar12;
      DVar8 = (DirectDataRef)0x1;
    }
    else {
      lVar2 = *(long *)param_2;
      if (lVar2 == 0) {
        uVar4 = ACFULogging::getLogInstance();
        pcVar9 = "%s::%s: object does not hold any data\n";
LAB_00217ed5:
        ACFULogging::handleMessage(uVar4,2,pcVar9,"ACFUDataContainer","copyDirectData");
        return this;
      }
      pvVar6 = _malloc(in_RCX);
      if (pvVar6 == (void *)0x0) {
        uVar4 = ACFULogging::getLogInstance();
        pcVar9 = "%s::%s: unable to allocate data\n";
        goto LAB_00217ed5;
      }
      lVar2 = _CFDataGetBytePtr(lVar2);
      _memcpy(pvVar6,(void *)(lVar2 + CONCAT44(0,in_EDX)),in_RCX);
      pDVar5 = operator_new(0x18);
      *(void **)pDVar5 = pvVar6;
      DVar8 = (DirectDataRef)0x0;
    }
    *(size_t *)(pDVar5 + 8) = in_RCX;
    pDVar5[0x10] = DVar8;
    pDVar5[0x11] = (DirectDataRef)0x1;
    std::
    unique_ptr<ACFUDataContainer::DirectDataRef,std::default_delete<ACFUDataContainer::DirectDataRef>>
    ::reset_abi_ne190102_(this,pDVar5);
    if (**(long **)this != 0) {
      return this;
    }
    uVar4 = ACFULogging::getLogInstance();
    pcVar9 = "%s::%s: failed to create file data\n";
    uVar11 = 4;
  }
  ACFULogging::handleMessage(uVar4,uVar11,pcVar9,"ACFUDataContainer","copyDirectData");
  return this;
}

