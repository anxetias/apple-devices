// rea decompile_all
// name: FUN_1000049e8
// address: 0x1000049e8
// body: available
// range: 0x1000049e8-0x100004c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100004bd4 to 0x10001346d _close (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000049e8(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if (6 < DAT_100021030) {
    FUN_1000008d2(7,0,&cf___);
  }
  puVar2 = _malloc(0xf0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    DAT_100022b60 = DAT_100022b60 + 1;
    *(int *)((long)puVar2 + 0x14) = DAT_100022b60;
    *(int *)((long)puVar2 + 0x4c) = param_1;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = puVar2 + 0x1a;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = puVar2 + 0x1c;
    FUN_10000de27(param_1,0);
    iVar1 = FUN_10000de65(*(undefined4 *)((long)puVar2 + 0x4c));
    if ((iVar1 != 0) && (2 < DAT_100021030)) {
      pcVar3 = _strerror(iVar1);
      FUN_1000008d2(3,0,&cf__sFailedtoconfigurenewclientsocket__d_s,"HandleNewClient",iVar1,pcVar3);
    }
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    lVar4 = _CFSocketCreateWithNative(uVar5,*(undefined4 *)((long)puVar2 + 0x4c),9,FUN_100004c4c);
    puVar2[4] = lVar4;
    if (lVar4 == 0) {
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sFailedtocreatenewcfsocket,"HandleNewClient");
      }
      _close(*(int *)((long)puVar2 + 0x4c));
    }
    else {
      _CFSocketSetSocketFlags(lVar4,0);
      lVar4 = _CFSocketCreateRunLoopSource(uVar5,puVar2[4],0);
      puVar2[5] = lVar4;
      if (lVar4 != 0) {
        uVar5 = _CFRunLoopGetCurrent();
        _CFRunLoopAddSource(uVar5,puVar2[5],*(undefined8 *)PTR__kCFRunLoopDefaultMode_10001c048);
        return;
      }
      if (2 < DAT_100021030) {
        FUN_1000008d2(3,0,&cf__sFailedtocreaterunloopsourceforsocket,"HandleNewClient");
      }
      _CFSocketInvalidate(puVar2[4]);
      _CFRelease(puVar2[4]);
    }
    _free(puVar2);
    return;
  }
  if (1 < DAT_100021030) {
    piVar6 = ___error();
    iVar1 = *piVar6;
    piVar6 = ___error();
    pcVar3 = _strerror(*piVar6);
    FUN_1000008d2(2,0,&cf__sFailedtoallocateanewclientcontext__d__s,"HandleNewClient",iVar1,pcVar3);
  }
  _close(param_1);
  return;
}

