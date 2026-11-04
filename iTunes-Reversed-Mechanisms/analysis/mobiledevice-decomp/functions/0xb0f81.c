// rea decompile_all
// name: _MDMDirectoryEnumeratorRefCreate
// address: 0xb0f81
// body: available
// range: 0xb0f81-0xb1165 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _MDMDirectoryEnumeratorRefCreate(long param_1,undefined1 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  char *local_90;
  code *local_88;
  
  if (param_1 == 0) {
    _MDMDirectoryEnumeratorRefCreate_cold_1();
    return 0;
  }
  local_b0 = PTR___NSConcreteStackBlock_004412a8;
  local_a8 = 0x40000000;
  local_a0 = ____CreateCFInstanceZeroed_block_invoke;
  local_98 = &___block_descriptor_tmp;
  local_90 = "struct __MDMDirectoryEnumerator";
  local_88 = ___MDMDirectoryEnumeratorFinalize;
  if (__CreateCFInstanceZeroed_once != -1) {
    _dispatch_once(&__CreateCFInstanceZeroed_once,&local_b0);
  }
  lVar2 = __CFRuntimeCreateInstance
                    (0,*(undefined8 *)(__CreateCFInstanceZeroed_registration + 0x60),0x18,0);
  if (lVar2 == 0) {
    _dmlog("MDMDirectoryEnumeratorRefCreate",0x1fb,&cf_unabletocreateCFobject);
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  lVar3 = _realpath_DARWIN_EXTSN(param_1,0);
  *(long *)(lVar2 + 0x10) = lVar3;
  if (lVar3 == 0) {
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    pcVar6 = &cf_realpathfailedfor_s__s;
    uVar7 = 0x11b;
    lVar3 = param_1;
  }
  else {
    iVar1 = _lstat_INODE64(lVar3,&local_b0);
    if (iVar1 != -1) {
      if ((local_b0._4_2_ & 0xf000) == 0x4000) {
        *(undefined1 *)(lVar2 + 0x18) = param_2;
        return lVar2;
      }
      _dmlog("init_directory_enumerator",0x125,&cf_invalidparameter__sisnotadirectory_,param_1);
      goto LAB_000b110e;
    }
    lVar3 = *(long *)(lVar2 + 0x10);
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    pcVar6 = &cf_statfailedfor_s__s;
    uVar7 = 0x120;
  }
  _dmlog("init_directory_enumerator",uVar7,pcVar6,lVar3,pcVar5);
LAB_000b110e:
  _dmlog("MDMDirectoryEnumeratorRefCreate",0x1fe,&cf_unabletoinitializetokenforpath__s,param_1);
  _CFRelease(lVar2);
  return 0;
}

