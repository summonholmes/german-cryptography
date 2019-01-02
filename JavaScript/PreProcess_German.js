export function PreProcess_German(rawtext) {
    // Must not use regex \W or else umlaut characters are erased
    return rawtext.replace(/[\s.,;:!?-]/g, '').toLowerCase()
};
