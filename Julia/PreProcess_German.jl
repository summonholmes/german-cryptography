function PreProcess_German(rawtext)
    return replace(lowercase(rawtext), r"[-,.:;!?\n ]", "")
end