document.querySelectorAll('section').forEach(section => {
    section.addEventListener('mouseover', () => {
        section.style.background = '#ddd';
    });
    section.addEventListener('mouseout', () => {
        section.style.background = '#f0f0f0';
    });
});