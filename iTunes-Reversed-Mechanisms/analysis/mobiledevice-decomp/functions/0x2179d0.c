// rea decompile_all
// name: ACFUDataContainer::copyData
// address: 0x2179d0
// body: available
// range: 0x2179d0-0x217bf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::copyData(unsigned int, unsigned long) */

long __thiscall ACFUDataContainer::copyData(ACFUDataContainer *this,uint param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  undefined4 in_register_00000034;
  ulong uVar10;
  uint uVar11;
  ACFUDataContainer *pAVar12;
  ulong uVar13;
  
  uVar10 = CONCAT44(in_register_00000034,param_1);
  if (param_2 == 0) {
    copyData((uint)this,uVar10);
  }
  else {
    pAVar12 = this;
    uVar3 = getLength(this);
    uVar11 = (uint)pAVar12;
    if (uVar3 == 0) {
      copyData(uVar11,uVar10);
    }
    else {
      uVar13 = CONCAT44(0,param_1);
      uVar9 = uVar3 - uVar13;
      if (uVar3 < uVar13 || uVar9 == 0) {
        copyData(uVar11,uVar10);
      }
      else {
        if (uVar9 < param_2) {
          uVar4 = ACFULogging::getLogInstance();
          uVar10 = 4;
          ACFULogging::handleMessage
                    (uVar4,4,"%s::%s: reducing requested length %zu -> %zu\n","ACFUDataContainer",
                     "copyData",param_2,uVar9);
          uVar11 = (uint)uVar4;
          param_2 = uVar9;
        }
        if (this[0x18] == (ACFUDataContainer)0x1) {
          if (*(int *)(this + 8) < 0) {
            copyData(uVar11,uVar10);
          }
          else {
            lVar5 = _sysconf(0x1d);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar13;
            lVar6 = _sysconf(0x1d);
            uVar9 = (ulong)((double)lVar6 * (double)SUB168(auVar1 / SEXT816(lVar5),0));
            uVar13 = (ulong)(param_1 - (int)uVar9);
            uVar10 = param_2 + uVar13;
            uVar4 = ACFULogging::getLogInstance();
            ACFULogging::handleMessage
                      (uVar4,4,
                       "%s::%s: paging in new length for page alignment (Requested: %zu. Aligned: %zu)\n"
                       ,"ACFUDataContainer","copyData",param_2,uVar10);
            uVar11 = 0;
            uVar3 = uVar10;
            lVar5 = _mmap(0,uVar10,1,2,*(undefined4 *)(this + 8),uVar9 & 0xffffffff);
            if (lVar5 == -1) {
              copyData(uVar11,uVar3);
            }
            else {
              uVar11 = (uint)*(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
              uVar3 = 0;
              lVar6 = _CFDataCreateMutable();
              if (lVar6 != 0) {
                _CFDataAppendBytes(lVar6,uVar13 + lVar5,param_2);
                iVar2 = _munmap(lVar5,uVar10);
                if (iVar2 != -1) {
                  return lVar6;
                }
                uVar4 = ACFULogging::getLogInstance();
                piVar7 = ___error();
                pcVar8 = _strerror(*piVar7);
                ACFULogging::handleMessage
                          (uVar4,4,"%s::%s: failed to un-map file: (%s)\n","ACFUDataContainer",
                           "copyData",pcVar8);
                return lVar6;
              }
              copyData(uVar11,uVar3);
            }
          }
        }
        else if (*(long *)this == 0) {
          copyData(uVar11,uVar10);
        }
        else {
          uVar11 = (uint)*(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
          uVar10 = 0;
          lVar5 = _CFDataCreateMutable();
          if (lVar5 != 0) {
            lVar6 = _CFDataGetBytePtr(*(undefined8 *)this);
            _CFDataAppendBytes(lVar5,uVar13 + lVar6,param_2);
            return lVar5;
          }
          copyData(uVar11,uVar10);
        }
      }
    }
  }
  return 0;
}

