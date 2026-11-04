// rea decompile_all
// name: ACFUDataContainer::DirectDataRef::~DirectDataRef
// address: 0x21722c
// body: available
// range: 0x21722c-0x21735c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x217358 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::DirectDataRef::~DirectDataRef() */

void __thiscall ACFUDataContainer::DirectDataRef::~DirectDataRef(DirectDataRef *this)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  char *pcVar6;
  void *pvVar7;
  long lVar8;
  
  pvVar7 = *(void **)this;
  if (((pvVar7 != (void *)0x0) && (lVar8 = *(long *)(this + 8), lVar8 != 0)) &&
     (this[0x11] == (DirectDataRef)0x1)) {
    if (this[0x10] == (DirectDataRef)0x0) {
      _free(pvVar7);
      return;
    }
    uVar2 = _sysconf(0x1d);
    if ((ulong)pvVar7 % uVar2 != 0) {
      uVar2 = _sysconf(0x1d);
      uVar3 = _sysconf(0x1d);
      uVar4 = ACFULogging::getLogInstance();
      lVar8 = lVar8 + (ulong)pvVar7 % uVar3;
      ACFULogging::handleMessage
                (uVar4,4,
                 "%s::%s: unmaping new length for page alignment (alignedLength: %zu. originalLength: %zu)\n"
                 ,"ACFUDataContainer","~DirectDataRef",lVar8,*(undefined8 *)(this + 8));
      pvVar7 = (void *)((long)pvVar7 - (ulong)pvVar7 % uVar2);
    }
    iVar1 = _munmap(pvVar7,lVar8);
    if (iVar1 == -1) {
      uVar4 = ACFULogging::getLogInstance();
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      ACFULogging::handleMessage
                (uVar4,2,"%s::%s: failed to unmap file: (%s)\n","ACFUDataContainer","~DirectDataRef"
                 ,pcVar6);
    }
  }
  return;
}

