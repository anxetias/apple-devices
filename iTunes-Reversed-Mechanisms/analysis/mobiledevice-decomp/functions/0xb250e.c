// rea decompile_all
// name: _create_name_for_mkdtemp
// address: 0xb250e
// body: available
// range: 0xb250e-0xb28c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb28c4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _create_name_for_mkdtemp(long param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  undefined1 auVar13 [16];
  char local_d38 [256];
  undefined1 local_c38 [2048];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d38[0xf0] = '\0';
  local_d38[0xf1] = '\0';
  local_d38[0xf2] = '\0';
  local_d38[0xf3] = '\0';
  local_d38[0xf4] = '\0';
  local_d38[0xf5] = '\0';
  local_d38[0xf6] = '\0';
  local_d38[0xf7] = '\0';
  local_d38[0xf8] = '\0';
  local_d38[0xf9] = '\0';
  local_d38[0xfa] = '\0';
  local_d38[0xfb] = '\0';
  local_d38[0xfc] = '\0';
  local_d38[0xfd] = '\0';
  local_d38[0xfe] = '\0';
  local_d38[0xe0] = '\0';
  local_d38[0xe1] = '\0';
  local_d38[0xe2] = '\0';
  local_d38[0xe3] = '\0';
  local_d38[0xe4] = '\0';
  local_d38[0xe5] = '\0';
  local_d38[0xe6] = '\0';
  local_d38[0xe7] = '\0';
  local_d38[0xe8] = '\0';
  local_d38[0xe9] = '\0';
  local_d38[0xea] = '\0';
  local_d38[0xeb] = '\0';
  local_d38[0xec] = '\0';
  local_d38[0xed] = '\0';
  local_d38[0xee] = '\0';
  local_d38[0xef] = 0;
  local_d38[0xd0] = '\0';
  local_d38[0xd1] = '\0';
  local_d38[0xd2] = '\0';
  local_d38[0xd3] = '\0';
  local_d38[0xd4] = '\0';
  local_d38[0xd5] = '\0';
  local_d38[0xd6] = '\0';
  local_d38[0xd7] = '\0';
  local_d38[0xd8] = '\0';
  local_d38[0xd9] = '\0';
  local_d38[0xda] = '\0';
  local_d38[0xdb] = '\0';
  local_d38[0xdc] = '\0';
  local_d38[0xdd] = '\0';
  local_d38[0xde] = '\0';
  local_d38[0xdf] = '\0';
  local_d38[0xc0] = '\0';
  local_d38[0xc1] = '\0';
  local_d38[0xc2] = '\0';
  local_d38[0xc3] = '\0';
  local_d38[0xc4] = '\0';
  local_d38[0xc5] = '\0';
  local_d38[0xc6] = '\0';
  local_d38[199] = '\0';
  local_d38[200] = '\0';
  local_d38[0xc9] = '\0';
  local_d38[0xca] = '\0';
  local_d38[0xcb] = '\0';
  local_d38[0xcc] = '\0';
  local_d38[0xcd] = '\0';
  local_d38[0xce] = '\0';
  local_d38[0xcf] = '\0';
  local_d38[0xb0] = '\0';
  local_d38[0xb1] = '\0';
  local_d38[0xb2] = '\0';
  local_d38[0xb3] = '\0';
  local_d38[0xb4] = '\0';
  local_d38[0xb5] = '\0';
  local_d38[0xb6] = '\0';
  local_d38[0xb7] = '\0';
  local_d38[0xb8] = '\0';
  local_d38[0xb9] = '\0';
  local_d38[0xba] = '\0';
  local_d38[0xbb] = '\0';
  local_d38[0xbc] = '\0';
  local_d38[0xbd] = '\0';
  local_d38[0xbe] = '\0';
  local_d38[0xbf] = '\0';
  local_d38[0xa0] = '\0';
  local_d38[0xa1] = '\0';
  local_d38[0xa2] = '\0';
  local_d38[0xa3] = '\0';
  local_d38[0xa4] = '\0';
  local_d38[0xa5] = '\0';
  local_d38[0xa6] = '\0';
  local_d38[0xa7] = '\0';
  local_d38[0xa8] = '\0';
  local_d38[0xa9] = '\0';
  local_d38[0xaa] = '\0';
  local_d38[0xab] = '\0';
  local_d38[0xac] = '\0';
  local_d38[0xad] = '\0';
  local_d38[0xae] = '\0';
  local_d38[0xaf] = '\0';
  local_d38[0x90] = '\0';
  local_d38[0x91] = '\0';
  local_d38[0x92] = '\0';
  local_d38[0x93] = '\0';
  local_d38[0x94] = '\0';
  local_d38[0x95] = '\0';
  local_d38[0x96] = '\0';
  local_d38[0x97] = '\0';
  local_d38[0x98] = '\0';
  local_d38[0x99] = '\0';
  local_d38[0x9a] = '\0';
  local_d38[0x9b] = '\0';
  local_d38[0x9c] = '\0';
  local_d38[0x9d] = '\0';
  local_d38[0x9e] = '\0';
  local_d38[0x9f] = '\0';
  local_d38[0x80] = '\0';
  local_d38[0x81] = '\0';
  local_d38[0x82] = '\0';
  local_d38[0x83] = '\0';
  local_d38[0x84] = '\0';
  local_d38[0x85] = '\0';
  local_d38[0x86] = '\0';
  local_d38[0x87] = '\0';
  local_d38[0x88] = '\0';
  local_d38[0x89] = '\0';
  local_d38[0x8a] = '\0';
  local_d38[0x8b] = '\0';
  local_d38[0x8c] = '\0';
  local_d38[0x8d] = '\0';
  local_d38[0x8e] = '\0';
  local_d38[0x8f] = '\0';
  local_d38[0x70] = '\0';
  local_d38[0x71] = '\0';
  local_d38[0x72] = '\0';
  local_d38[0x73] = '\0';
  local_d38[0x74] = '\0';
  local_d38[0x75] = '\0';
  local_d38[0x76] = '\0';
  local_d38[0x77] = '\0';
  local_d38[0x78] = '\0';
  local_d38[0x79] = '\0';
  local_d38[0x7a] = '\0';
  local_d38[0x7b] = '\0';
  local_d38[0x7c] = '\0';
  local_d38[0x7d] = '\0';
  local_d38[0x7e] = '\0';
  local_d38[0x7f] = '\0';
  local_d38[0x60] = '\0';
  local_d38[0x61] = '\0';
  local_d38[0x62] = '\0';
  local_d38[99] = '\0';
  local_d38[100] = '\0';
  local_d38[0x65] = '\0';
  local_d38[0x66] = '\0';
  local_d38[0x67] = '\0';
  local_d38[0x68] = '\0';
  local_d38[0x69] = '\0';
  local_d38[0x6a] = '\0';
  local_d38[0x6b] = '\0';
  local_d38[0x6c] = '\0';
  local_d38[0x6d] = '\0';
  local_d38[0x6e] = '\0';
  local_d38[0x6f] = '\0';
  local_d38[0x50] = '\0';
  local_d38[0x51] = '\0';
  local_d38[0x52] = '\0';
  local_d38[0x53] = '\0';
  local_d38[0x54] = '\0';
  local_d38[0x55] = '\0';
  local_d38[0x56] = '\0';
  local_d38[0x57] = '\0';
  local_d38[0x58] = '\0';
  local_d38[0x59] = '\0';
  local_d38[0x5a] = '\0';
  local_d38[0x5b] = '\0';
  local_d38[0x5c] = '\0';
  local_d38[0x5d] = '\0';
  local_d38[0x5e] = '\0';
  local_d38[0x5f] = '\0';
  local_d38[0x40] = '\0';
  local_d38[0x41] = '\0';
  local_d38[0x42] = '\0';
  local_d38[0x43] = '\0';
  local_d38[0x44] = '\0';
  local_d38[0x45] = '\0';
  local_d38[0x46] = '\0';
  local_d38[0x47] = '\0';
  local_d38[0x48] = '\0';
  local_d38[0x49] = '\0';
  local_d38[0x4a] = '\0';
  local_d38[0x4b] = '\0';
  local_d38[0x4c] = '\0';
  local_d38[0x4d] = '\0';
  local_d38[0x4e] = '\0';
  local_d38[0x4f] = '\0';
  local_d38[0x30] = '\0';
  local_d38[0x31] = '\0';
  local_d38[0x32] = '\0';
  local_d38[0x33] = '\0';
  local_d38[0x34] = '\0';
  local_d38[0x35] = '\0';
  local_d38[0x36] = '\0';
  local_d38[0x37] = '\0';
  local_d38[0x38] = '\0';
  local_d38[0x39] = '\0';
  local_d38[0x3a] = '\0';
  local_d38[0x3b] = '\0';
  local_d38[0x3c] = '\0';
  local_d38[0x3d] = '\0';
  local_d38[0x3e] = '\0';
  local_d38[0x3f] = '\0';
  local_d38[0x20] = '\0';
  local_d38[0x21] = '\0';
  local_d38[0x22] = '\0';
  local_d38[0x23] = '\0';
  local_d38[0x24] = '\0';
  local_d38[0x25] = '\0';
  local_d38[0x26] = '\0';
  local_d38[0x27] = '\0';
  local_d38[0x28] = '\0';
  local_d38[0x29] = '\0';
  local_d38[0x2a] = '\0';
  local_d38[0x2b] = '\0';
  local_d38[0x2c] = '\0';
  local_d38[0x2d] = '\0';
  local_d38[0x2e] = '\0';
  local_d38[0x2f] = '\0';
  local_d38[0x10] = '\0';
  local_d38[0x11] = '\0';
  local_d38[0x12] = '\0';
  local_d38[0x13] = '\0';
  local_d38[0x14] = '\0';
  local_d38[0x15] = '\0';
  local_d38[0x16] = '\0';
  local_d38[0x17] = '\0';
  local_d38[0x18] = '\0';
  local_d38[0x19] = '\0';
  local_d38[0x1a] = '\0';
  local_d38[0x1b] = '\0';
  local_d38[0x1c] = '\0';
  local_d38[0x1d] = '\0';
  local_d38[0x1e] = '\0';
  local_d38[0x1f] = '\0';
  local_d38[0] = '\0';
  local_d38[1] = '\0';
  local_d38[2] = '\0';
  local_d38[3] = '\0';
  local_d38[4] = '\0';
  local_d38[5] = '\0';
  local_d38[6] = '\0';
  local_d38[7] = '\0';
  local_d38[8] = '\0';
  local_d38[9] = '\0';
  local_d38[10] = '\0';
  local_d38[0xb] = '\0';
  local_d38[0xc] = '\0';
  local_d38[0xd] = '\0';
  local_d38[0xe] = '\0';
  local_d38[0xf] = '\0';
  if (param_1 == 0) {
    pcVar12 = (char *)0x0;
    goto LAB_000b282e;
  }
  if (param_2 == (char *)0x0) {
    lVar6 = _CFStringCreateWithFileSystemRepresentation(0,param_1);
    if (lVar6 != 0) {
      iVar3 = 0xf8;
LAB_000b2619:
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar7 = _CFStringCreateMutableWithExternalCharactersNoCopy
                        (uVar1,local_c38,0,0x400,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
      lVar5 = lVar6;
      if (lVar7 == 0) {
LAB_000b2806:
        pcVar12 = (char *)0x0;
        _dmlog("create_name_for_mkdtemp",0x3f5,&cf_unabletotruncate__,lVar5);
      }
      else {
        lVar8 = _CFStringGetLength(lVar6);
        if (0 < iVar3 && 0 < lVar8) {
          pcVar12 = local_438;
          lVar11 = 0;
          do {
            auVar13 = _CFStringGetRangeOfComposedCharactersAtIndex(lVar6,lVar11);
            lVar9 = auVar13._8_8_;
            if (0x400 < lVar9) {
              _CFRelease(lVar7);
              goto LAB_000b2806;
            }
            _CFStringGetCharacters(lVar6,auVar13._0_8_,lVar9,local_c38);
            _CFStringSetExternalCharactersNoCopy(lVar7,local_c38,lVar9,0x400);
            cVar2 = _CFStringGetFileSystemRepresentation(lVar7,pcVar12,iVar3 + 1);
            if (cVar2 == '\0') {
              *pcVar12 = '\0';
              break;
            }
            lVar11 = lVar11 + lVar9;
            sVar4 = _strlen(pcVar12);
            if (lVar8 <= lVar11) break;
            pcVar12 = pcVar12 + (int)sVar4;
            iVar3 = iVar3 - (int)sVar4;
          } while (0 < iVar3);
        }
        _CFRelease(lVar7);
        lVar7 = _CFStringCreateWithFileSystemRepresentation(uVar1,local_438);
        if (lVar7 == 0) goto LAB_000b2806;
        pcVar10 = "";
        if (param_2 != (char *)0x0) {
          pcVar10 = param_2;
        }
        lVar5 = _CFStringCreateWithFormat(0,0,&cf__s___s,pcVar10,lVar7,"_XXXXXX");
        if (lVar5 == 0) {
          pcVar12 = (char *)0x0;
          _dmlog("create_name_for_mkdtemp",0x3fb,&cf_unabletocreateCFStringfrom__s___s,pcVar10,lVar7
                 ,"_XXXXXX");
        }
        else {
          cVar2 = _CFStringGetFileSystemRepresentation(lVar5,local_d38,0xff);
          if (cVar2 == '\0') {
            pcVar12 = (char *)0x0;
            _dmlog("create_name_for_mkdtemp",0x400,&cf_unabletogetfilesystemrepresentationof___,
                   lVar5);
          }
          else {
            pcVar12 = _strdup(local_d38);
          }
        }
        _CFRelease(lVar6);
        _CFRelease(lVar7);
        if (lVar5 == 0) goto LAB_000b282e;
      }
      _CFRelease(lVar5);
      goto LAB_000b282e;
    }
  }
  else {
    sVar4 = _strlen(param_2);
    lVar5 = _CFStringCreateWithFileSystemRepresentation(0,param_1);
    if (lVar5 != 0) {
      iVar3 = 0xf8 - (int)sVar4;
      lVar6 = lVar5;
      if (iVar3 < 0x400) goto LAB_000b2619;
      goto LAB_000b2806;
    }
  }
  pcVar12 = (char *)0x0;
  _dmlog("create_name_for_mkdtemp",0x3f0,&cf_UnabletocreateCFStringfrom__s,param_1);
LAB_000b282e:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pcVar12;
}

